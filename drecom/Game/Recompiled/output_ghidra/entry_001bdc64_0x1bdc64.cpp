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

// Function: entry_001bdc64
// Address: 0x1bdc64 - 0x1bdd58
void entry_001bdc64_0x1bdc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc64_0x1bdc64");
#endif

    switch (ctx->pc) {
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdcc0u: goto label_1bdcc0;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdcf0u: goto label_1bdcf0;
        case 0x1bdd00u: goto label_1bdd00;
        default: break;
    }

    ctx->pc = 0x1bdc64u;

    // 0x1bdc64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc68: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bdc6c: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x1bdc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bdc70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc74: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bdc74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bdc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdc80: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1bdc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bdc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bdc88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bdc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bdc8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdc94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDC94u;
    SET_GPR_U32(ctx, 31, 0x1BDC9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDC94u, 0x1BDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC9Cu;
label_1bdc9c:
    // 0x1bdc9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdca4: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1bdca8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bdca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bdcac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1bdcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bdcb0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1bdcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdcb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bdcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bdcb8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BDCB8u;
    SET_GPR_U32(ctx, 31, 0x1BDCC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BDCB8u, 0x1BDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCC0u;
label_1bdcc0:
    // 0x1bdcc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bdcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bdcc8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdccc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcd0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bdcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdcd4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BDCD4u;
    SET_GPR_U32(ctx, 31, 0x1BDCDCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BDCD4u, 0x1BDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdce0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdce4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdce4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdce8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDCE8u;
    SET_GPR_U32(ctx, 31, 0x1BDCF0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDCE8u, 0x1BDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCF0u;
label_1bdcf0:
    // 0x1bdcf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcf4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1bdcf8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1BDCF8u;
    SET_GPR_U32(ctx, 31, 0x1BDD00u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BDCF8u, 0x1BDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD00u;
label_1bdd00:
    // 0x1bdd00: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1bdd04: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1bdd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1bdd08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bdd08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdd0c: 0x0  nop
    ctx->pc = 0x1bdd0cu;
    // NOP
    // 0x1bdd10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1bdd18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd1c: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bdd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd24: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bdd30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd34: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1bdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bdd3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdd40: 0x0  nop
    ctx->pc = 0x1bdd40u;
    // NOP
    // 0x1bdd44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD44u;
    {
        const bool branch_taken_0x1bdd44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bdd44) {
            ctx->pc = 0x1BDD58u;
            return;
        }
    }
    ctx->pc = 0x1BDD4Cu;
    // 0x1bdd4c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1bdd58u;
}
