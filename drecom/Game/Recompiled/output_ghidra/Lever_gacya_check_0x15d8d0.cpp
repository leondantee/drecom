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

// Function: Lever_gacya_check
// Address: 0x15d8d0 - 0x15da90
void Lever_gacya_check_0x15d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Lever_gacya_check_0x15d8d0");
#endif

    switch (ctx->pc) {
        case 0x15d900u: goto label_15d900;
        default: break;
    }

    ctx->pc = 0x15d8d0u;

    // 0x15d8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15d8d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15d8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d8dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15d8e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d8e4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15d8e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d8ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d8f0: 0xc46c1400  lwc1        $f12, 0x1400($v1)
    ctx->pc = 0x15d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d8f4: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x15d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15d8f8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15D8F8u;
    SET_GPR_U32(ctx, 31, 0x15D900u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15D8F8u, 0x15D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D900u;
label_15d900:
    // 0x15d900: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d904: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d908: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x15d90c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15d910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d914: 0x0  nop
    ctx->pc = 0x15d914u;
    // NOP
    // 0x15d918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d91c: 0x0  nop
    ctx->pc = 0x15d91cu;
    // NOP
    // 0x15d920: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15D920u;
    {
        const bool branch_taken_0x15d920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d920) {
            ctx->pc = 0x15D94Cu;
            goto label_15d94c;
        }
    }
    ctx->pc = 0x15D928u;
    // 0x15d928: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d92c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x15d930: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15d934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d938: 0x0  nop
    ctx->pc = 0x15d938u;
    // NOP
    // 0x15d93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d940: 0x0  nop
    ctx->pc = 0x15d940u;
    // NOP
    // 0x15d944: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15D944u;
    {
        const bool branch_taken_0x15d944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d944) {
            ctx->pc = 0x15D96Cu;
            goto label_15d96c;
        }
    }
    ctx->pc = 0x15D94Cu;
label_15d94c:
    // 0x15d94c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d950: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d954: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x15d958: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
    // 0x15d95c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d960: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x15d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d968: 0xe4401400  swc1        $f0, 0x1400($v0)
    ctx->pc = 0x15d968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5120), bits); }
label_15d96c:
    // 0x15d96c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d970: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d974: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D978u;
    {
        const bool branch_taken_0x15d978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d978) {
            ctx->pc = 0x15D990u;
            goto label_15d990;
        }
    }
    ctx->pc = 0x15D980u;
    // 0x15d980: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d984: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d988: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15d98c: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
label_15d990:
    // 0x15d990: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d998: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x15d99c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D99Cu;
    {
        const bool branch_taken_0x15d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d99c) {
            ctx->pc = 0x15D9B4u;
            goto label_15d9b4;
        }
    }
    ctx->pc = 0x15D9A4u;
    // 0x15d9a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d9a8: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d9ac: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15d9b0: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
label_15d9b4:
    // 0x15d9b4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d9b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d9b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d9bc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15d9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15d9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D9C0u;
    {
        const bool branch_taken_0x15d9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9c0) {
            ctx->pc = 0x15D9D8u;
            goto label_15d9d8;
        }
    }
    ctx->pc = 0x15D9C8u;
    // 0x15d9c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d9cc: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d9d0: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15d9d4: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
label_15d9d8:
    // 0x15d9d8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d9dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d9e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15d9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15d9e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D9E4u;
    {
        const bool branch_taken_0x15d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9e4) {
            ctx->pc = 0x15D9FCu;
            goto label_15d9fc;
        }
    }
    ctx->pc = 0x15D9ECu;
    // 0x15d9ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d9f0: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d9f4: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15d9f8: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
label_15d9fc:
    // 0x15d9fc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d9fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15da00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15da04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15da08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15DA08u;
    {
        const bool branch_taken_0x15da08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da08) {
            ctx->pc = 0x15DA20u;
            goto label_15da20;
        }
    }
    ctx->pc = 0x15DA10u;
    // 0x15da10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da14: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15da18: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15da1c: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
label_15da20:
    // 0x15da20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15da24: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15da28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DA2Cu;
    {
        const bool branch_taken_0x15da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da2c) {
            ctx->pc = 0x15DA48u;
            goto label_15da48;
        }
    }
    ctx->pc = 0x15DA34u;
    // 0x15da34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da38: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x15da38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
    // 0x15da3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15da40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15DA40u;
    {
        const bool branch_taken_0x15da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da40) {
            ctx->pc = 0x15DA7Cu;
            goto label_15da7c;
        }
    }
    ctx->pc = 0x15DA48u;
label_15da48:
    // 0x15da48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da4c: 0x8c4213fc  lw          $v0, 0x13FC($v0)
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5116)));
    // 0x15da50: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x15da50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15da54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15DA54u;
    {
        const bool branch_taken_0x15da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da54) {
            ctx->pc = 0x15DA78u;
            goto label_15da78;
        }
    }
    ctx->pc = 0x15DA5Cu;
    // 0x15da5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da60: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15da64: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x15da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x15da68: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
    // 0x15da6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15da70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15DA70u;
    {
        const bool branch_taken_0x15da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da70) {
            ctx->pc = 0x15DA7Cu;
            goto label_15da7c;
        }
    }
    ctx->pc = 0x15DA78u;
label_15da78:
    // 0x15da78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15da78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15da7c:
    // 0x15da7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15da7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15da80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15da80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15da84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15da88: 0x3e00008  jr          $ra
    ctx->pc = 0x15DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DA90u;
}
