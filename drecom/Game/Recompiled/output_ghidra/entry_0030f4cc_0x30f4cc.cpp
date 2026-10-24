#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0030f4cc
// Address: 0x30f4cc - 0x30f524
void entry_0030f4cc_0x30f4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f4cc_0x30f4cc");
#endif

    ctx->pc = 0x30f4ccu;

    // 0x30f4cc: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4d0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f4d4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30f4d8: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x30f4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30f4dc: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x30F4DCu;
    {
        const bool branch_taken_0x30f4dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f4dc) {
            ctx->pc = 0x30F524u;
            return;
        }
    }
    ctx->pc = 0x30F4E4u;
    // 0x30f4e4: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4e8: 0x90a309df  lbu         $v1, 0x9DF($a1)
    ctx->pc = 0x30f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
    // 0x30f4ec: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x30f4ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f4f0: 0x32650020  andi        $a1, $s3, 0x20
    ctx->pc = 0x30f4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x30f4f4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x30F4F4u;
    {
        const bool branch_taken_0x30f4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f4f4) {
            ctx->pc = 0x30F524u;
            return;
        }
    }
    ctx->pc = 0x30F4FCu;
    // 0x30f4fc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f500: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x30f500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30f504: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f508: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x30f508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f50c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f510: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x30f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x30f514: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f518: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f51c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x30f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30f520: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30f520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30f524u;
}
