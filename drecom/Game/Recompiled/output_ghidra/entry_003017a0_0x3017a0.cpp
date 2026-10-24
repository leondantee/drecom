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

// Function: entry_003017a0
// Address: 0x3017a0 - 0x30184c
void entry_003017a0_0x3017a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003017a0_0x3017a0");
#endif

    switch (ctx->pc) {
        case 0x3017dcu: goto label_3017dc;
        case 0x3017f0u: goto label_3017f0;
        case 0x301804u: goto label_301804;
        case 0x301814u: goto label_301814;
        case 0x301824u: goto label_301824;
        case 0x301834u: goto label_301834;
        default: break;
    }

    ctx->pc = 0x3017a0u;

    // 0x3017a0: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x3017a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3017a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3017a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3017a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3017ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3017acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3017b0: 0x0  nop
    ctx->pc = 0x3017b0u;
    // NOP
    // 0x3017b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3017b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3017b8: 0x0  nop
    ctx->pc = 0x3017b8u;
    // NOP
    // 0x3017bc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3017BCu;
    {
        const bool branch_taken_0x3017bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3017bc) {
            ctx->pc = 0x30184Cu;
            return;
        }
    }
    ctx->pc = 0x3017C4u;
    // 0x3017c4: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x3017c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x3017c8: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3017c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3017cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3017d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3017d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017d4: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x3017D4u;
    SET_GPR_U32(ctx, 31, 0x3017DCu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x3017D4u, 0x3017DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017DCu;
label_3017dc:
    // 0x3017dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3017e0: 0x344229f3  ori         $v0, $v0, 0x29F3
    ctx->pc = 0x3017e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10739);
    // 0x3017e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3017e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3017E8u;
    SET_GPR_U32(ctx, 31, 0x3017F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3017E8u, 0x3017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017F0u;
label_3017f0:
    // 0x3017f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3017f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3017f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3017f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3017fc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x3017FCu;
    SET_GPR_U32(ctx, 31, 0x301804u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x301804u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301804u) { return; }
    ctx->pc = 0x301804u;
label_301804:
    // 0x301804: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301808: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30180c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30180Cu;
    SET_GPR_U32(ctx, 31, 0x301814u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301814u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301814u) { return; }
    ctx->pc = 0x301814u;
label_301814:
    // 0x301814: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x301814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301818: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x301818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30181c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30181Cu;
    SET_GPR_U32(ctx, 31, 0x301824u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301824u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301824u) { return; }
    ctx->pc = 0x301824u;
label_301824:
    // 0x301824: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x301824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x301828: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x301828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30182c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30182Cu;
    SET_GPR_U32(ctx, 31, 0x301834u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301834u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301834u) { return; }
    ctx->pc = 0x301834u;
label_301834:
    // 0x301834: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x301834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x301838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30183c: 0x0  nop
    ctx->pc = 0x30183cu;
    // NOP
    // 0x301840: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x301840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x301844: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x301844u;
    {
        const bool branch_taken_0x301844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301844) {
            ctx->pc = 0x3018C0u;
            return;
        }
    }
    ctx->pc = 0x30184Cu;
}
