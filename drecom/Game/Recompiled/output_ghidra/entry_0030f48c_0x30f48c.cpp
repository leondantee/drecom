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

// Function: entry_0030f48c
// Address: 0x30f48c - 0x30f4cc
void entry_0030f48c_0x30f48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f48c_0x30f48c");
#endif

    ctx->pc = 0x30f48cu;

    // 0x30f48c: 0x8fa80298  lw          $t0, 0x298($sp)
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f490: 0x910409df  lbu         $a0, 0x9DF($t0)
    ctx->pc = 0x30f490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x30f494: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x30f494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f498: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x30f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x30f49c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30F49Cu;
    {
        const bool branch_taken_0x30f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f49c) {
            ctx->pc = 0x30F4CCu;
            return;
        }
    }
    ctx->pc = 0x30F4A4u;
    // 0x30f4a4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4a8: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x30f4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x30f4ac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x30f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30f4b0: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x30f4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f4b4: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x30f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x30f4b8: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x30f4bc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4c0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f4c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f4c8: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30f4ccu;
}
