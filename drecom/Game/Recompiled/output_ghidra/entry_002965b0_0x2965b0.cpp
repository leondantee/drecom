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

// Function: entry_002965b0
// Address: 0x2965b0 - 0x2965fc
void entry_002965b0_0x2965b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002965b0_0x2965b0");
#endif

    ctx->pc = 0x2965b0u;

    // 0x2965b0: 0x16e0ff91  bnez        $s7, . + 4 + (-0x6F << 2)
    ctx->pc = 0x2965B0u;
    {
        const bool branch_taken_0x2965b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965b0) {
            ctx->pc = 0x2963F8u;
            return;
        }
    }
    ctx->pc = 0x2965B8u;
    // 0x2965b8: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x2965B8u;
    {
        const bool branch_taken_0x2965b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965b8) {
            ctx->pc = 0x2965FCu;
            return;
        }
    }
    ctx->pc = 0x2965C0u;
    // 0x2965c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2965c4: 0x906369ca  lbu         $v1, 0x69CA($v1)
    ctx->pc = 0x2965c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27082)));
    // 0x2965c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2965cc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2965ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2965d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2965d4: 0x906369cd  lbu         $v1, 0x69CD($v1)
    ctx->pc = 0x2965d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27085)));
    // 0x2965d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2965d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2965dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2965dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2965e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2965e4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2965e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2965e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2965e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2965ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2965f0: 0xa46469ac  sh          $a0, 0x69AC($v1)
    ctx->pc = 0x2965f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27052), (uint16_t)GPR_U32(ctx, 4));
    // 0x2965f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2965F4u;
    {
        const bool branch_taken_0x2965f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965f4) {
            ctx->pc = 0x296604u;
            return;
        }
    }
    ctx->pc = 0x2965FCu;
}
