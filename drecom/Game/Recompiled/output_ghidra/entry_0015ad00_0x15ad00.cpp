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

// Function: entry_0015ad00
// Address: 0x15ad00 - 0x15add0
void entry_0015ad00_0x15ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ad00_0x15ad00");
#endif

    switch (ctx->pc) {
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad90u: goto label_15ad90;
        default: break;
    }

    ctx->pc = 0x15ad00u;

    // 0x15ad00: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ad04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15ad08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15ad0c: 0x1060010e  beqz        $v1, . + 4 + (0x10E << 2)
    ctx->pc = 0x15AD0Cu;
    {
        const bool branch_taken_0x15ad0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad0c) {
            ctx->pc = 0x15B148u;
            return;
        }
    }
    ctx->pc = 0x15AD14u;
    // 0x15ad14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x15ad14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ad18: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ad1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ad20: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x15ad24: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x15ad28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15ad2c: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x15AD2Cu;
    {
        const bool branch_taken_0x15ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ad2c) {
            ctx->pc = 0x15AF34u;
            return;
        }
    }
    ctx->pc = 0x15AD34u;
    // 0x15ad34: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x15ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x15ad38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x15ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15ad3c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15AD3Cu;
    SET_GPR_U32(ctx, 31, 0x15AD44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15AD44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AD44u) { return; }
    ctx->pc = 0x15AD44u;
label_15ad44:
    // 0x15ad44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ad48: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x15ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15ad4c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15ad50: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x15ad54: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15AD54u;
    SET_GPR_U32(ctx, 31, 0x15AD5Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15AD54u, 0x15AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD5Cu;
label_15ad5c:
    // 0x15ad5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ad60: 0xc067588  jal         func_19D620
    ctx->pc = 0x15AD60u;
    SET_GPR_U32(ctx, 31, 0x15AD68u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15AD60u, 0x15AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD68u;
label_15ad68:
    // 0x15ad68: 0xe6001288  swc1        $f0, 0x1288($s0)
    ctx->pc = 0x15ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4744), bits); }
    // 0x15ad6c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ad70: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x15ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad74: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15ad74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ad78: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x15ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ad7c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x15ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ad80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ad84: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15ad84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15ad88: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15AD88u, 0x15AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0xe600128c  swc1        $f0, 0x128C($s0)
    ctx->pc = 0x15ad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4748), bits); }
    // 0x15ad94: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15ad94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x15ad98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ad9c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x15ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x15ada0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15ADA0u;
    {
        const bool branch_taken_0x15ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ada0) {
            ctx->pc = 0x15ADD0u;
            return;
        }
    }
    ctx->pc = 0x15ADA8u;
    // 0x15ada8: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15ada8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x15adac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15adb0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x15adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x15adb4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15adb8: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15adb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x15adbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15adc0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15adc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15adc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15adcc: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x15adccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15add0u;
}
