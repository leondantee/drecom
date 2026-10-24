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

// Function: Get_height_pos2
// Address: 0x174030 - 0x1740b8
void Get_height_pos2_0x174030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_height_pos2_0x174030");
#endif

    switch (ctx->pc) {
        case 0x174054u: goto label_174054;
        case 0x174064u: goto label_174064;
        case 0x17407cu: goto label_17407c;
        default: break;
    }

    ctx->pc = 0x174030u;

    // 0x174030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174034: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x174034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x174038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17403c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17403cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x174040: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x174040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x174044: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x174048: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x174048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17404c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17404Cu;
    SET_GPR_U32(ctx, 31, 0x174054u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x174054u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174054u) { return; }
    ctx->pc = 0x174054u;
label_174054:
    // 0x174054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174058: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17405c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17405Cu;
    SET_GPR_U32(ctx, 31, 0x174064u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x174064u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174064u) { return; }
    ctx->pc = 0x174064u;
label_174064:
    // 0x174064: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174068: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x174068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17406c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174070: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x174074: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174074u;
    SET_GPR_U32(ctx, 31, 0x17407Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174074u, 0x17407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17407Cu;
label_17407c:
    // 0x17407c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x17407cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174080: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174080u;
    {
        const bool branch_taken_0x174080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x174080) {
            ctx->pc = 0x17409Cu;
            goto label_17409c;
        }
    }
    ctx->pc = 0x174088u;
    // 0x174088: 0x3c02c8f4  lui         $v0, 0xC8F4
    ctx->pc = 0x174088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51444 << 16));
    // 0x17408c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x174090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174094u;
    {
        const bool branch_taken_0x174094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174094) {
            ctx->pc = 0x1740A4u;
            goto label_1740a4;
        }
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740a0: 0x0  nop
    ctx->pc = 0x1740a0u;
    // NOP
label_1740a4:
    // 0x1740a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1740a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1740a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1740a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1740ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1740b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1740B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1740B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1740B8u;
}
