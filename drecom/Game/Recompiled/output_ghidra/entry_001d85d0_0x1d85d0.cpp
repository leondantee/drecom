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

// Function: entry_001d85d0
// Address: 0x1d85d0 - 0x1d8658
void entry_001d85d0_0x1d85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d85d0_0x1d85d0");
#endif

    ctx->pc = 0x1d85d0u;

    // 0x1d85d0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d85d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1d85d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d85d8: 0x1680fe97  bnez        $s4, . + 4 + (-0x169 << 2)
    ctx->pc = 0x1D85D8u;
    {
        const bool branch_taken_0x1d85d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d85d8) {
            ctx->pc = 0x1D8038u;
            return;
        }
    }
    ctx->pc = 0x1D85E0u;
    // 0x1d85e0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1d85e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1d85e4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d85e8: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1d85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1d85ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d85ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d85f0: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1d85f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d85f4: 0x1460fe5f  bnez        $v1, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x1D85F4u;
    {
        const bool branch_taken_0x1d85f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d85f4) {
            ctx->pc = 0x1D7F74u;
            return;
        }
    }
    ctx->pc = 0x1D85FCu;
    // 0x1d85fc: 0x26f70090  addiu       $s7, $s7, 0x90
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1d8600: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d8604: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8608: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x1d8608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x1d860c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d8610: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d8610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d8614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8618: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d8618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d861c: 0x1460fe55  bnez        $v1, . + 4 + (-0x1AB << 2)
    ctx->pc = 0x1D861Cu;
    {
        const bool branch_taken_0x1d861c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d861c) {
            ctx->pc = 0x1D7F74u;
            return;
        }
    }
    ctx->pc = 0x1D8624u;
    // 0x1d8624: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d8624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8628: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d8628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d862c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d862cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8630: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8634: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8638: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d863c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d863cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d864c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d8650: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8658u;
}
