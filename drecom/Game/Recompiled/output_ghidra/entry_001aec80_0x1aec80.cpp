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

// Function: entry_001aec80
// Address: 0x1aec80 - 0x1aed28
void entry_001aec80_0x1aec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aec80_0x1aec80");
#endif

    switch (ctx->pc) {
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aed08u: goto label_1aed08;
        default: break;
    }

    ctx->pc = 0x1aec80u;

    // 0x1aec80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1aec80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aec84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aec88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1aec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1aec8c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AEC8Cu;
    {
        const bool branch_taken_0x1aec8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec8c) {
            ctx->pc = 0x1AED30u;
            return;
        }
    }
    ctx->pc = 0x1AEC94u;
    // 0x1aec94: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aec98: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aec9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeca0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1aeca4: 0x2446eff0  addiu       $a2, $v0, -0x1010
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1aeca8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1AECA8u;
    SET_GPR_U32(ctx, 31, 0x1AECB0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1AECB0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AECB0u) { return; }
    ctx->pc = 0x1AECB0u;
label_1aecb0:
    // 0x1aecb0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1aecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecb4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1aecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecb8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1aecb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aecbc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1aecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecc0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1aecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aecc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aecc8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1aecc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1aeccc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AECCCu;
    SET_GPR_U32(ctx, 31, 0x1AECD4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AECCCu, 0x1AECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECD4u;
label_1aecd4:
    // 0x1aecd4: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x1aecd8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1aecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1aecdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aecdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aece0: 0x0  nop
    ctx->pc = 0x1aece0u;
    // NOP
    // 0x1aece4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aece4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aece8: 0x0  nop
    ctx->pc = 0x1aece8u;
    // NOP
    // 0x1aecec: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1AECECu;
    {
        const bool branch_taken_0x1aecec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aecec) {
            ctx->pc = 0x1AED28u;
            return;
        }
    }
    ctx->pc = 0x1AECF4u;
    // 0x1aecf4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1aecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecf8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1aecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecfc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1aecfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aed00: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AED00u;
    SET_GPR_U32(ctx, 31, 0x1AED08u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AED00u, 0x1AED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED08u;
label_1aed08:
    // 0x1aed08: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1aed0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aed0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aed10: 0x0  nop
    ctx->pc = 0x1aed10u;
    // NOP
    // 0x1aed14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aed14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aed18: 0x0  nop
    ctx->pc = 0x1aed18u;
    // NOP
    // 0x1aed1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED1Cu;
    {
        const bool branch_taken_0x1aed1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aed1c) {
            ctx->pc = 0x1AED30u;
            return;
        }
    }
    ctx->pc = 0x1AED24u;
    // 0x1aed24: 0x0  nop
    ctx->pc = 0x1aed24u;
    // NOP
    ctx->pc = 0x1aed28u;
}
