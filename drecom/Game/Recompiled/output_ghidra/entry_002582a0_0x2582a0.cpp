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

// Function: entry_002582a0
// Address: 0x2582a0 - 0x258338
void entry_002582a0_0x2582a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002582a0_0x2582a0");
#endif

    ctx->pc = 0x2582a0u;

    // 0x2582a0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2582a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2582a4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2582a8: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2582A8u;
    {
        const bool branch_taken_0x2582a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582a8) {
            ctx->pc = 0x258180u;
            return;
        }
    }
    ctx->pc = 0x2582B0u;
    // 0x2582b0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2582b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2582b4: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2582b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2582b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2582bc: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x2582bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x2582c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2582c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2582c4: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x2582c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2582c8: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2582C8u;
    {
        const bool branch_taken_0x2582c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582c8) {
            ctx->pc = 0x258120u;
            return;
        }
    }
    ctx->pc = 0x2582D0u;
    // 0x2582d0: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x2582d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2582d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2582dc: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x2582dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x2582e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2582e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2582e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2582e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2582e8: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2582e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x2582ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2582ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2582f0: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x2582f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x2582f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2582f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2582f8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2582f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2582fc: 0x1460ff35  bnez        $v1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x2582FCu;
    {
        const bool branch_taken_0x2582fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582fc) {
            ctx->pc = 0x257FD4u;
            return;
        }
    }
    ctx->pc = 0x258304u;
    // 0x258304: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x258304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258308: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x258308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25830c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25830cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258310: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x258310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258314: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258318: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25831c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25831cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25832c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x258330: 0x3e00008  jr          $ra
    ctx->pc = 0x258330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258338u;
}
