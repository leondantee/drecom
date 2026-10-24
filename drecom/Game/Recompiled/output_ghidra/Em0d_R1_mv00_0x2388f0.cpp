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

// Function: Em0d_R1_mv00
// Address: 0x2388f0 - 0x238a24
void Em0d_R1_mv00_0x2388f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv00_0x2388f0");
#endif

    switch (ctx->pc) {
        case 0x2389c8u: goto label_2389c8;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389e4u: goto label_2389e4;
        case 0x238a14u: goto label_238a14;
        default: break;
    }

    ctx->pc = 0x2388f0u;

    // 0x2388f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2388f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2388f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2388f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2388f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2388fc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2388fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238900: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x238900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x238904: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x238904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x238908: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x238908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x23890c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x23890cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x238910: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238914: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x238914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238918: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x238918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23891c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x23891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x238920: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x238920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x238924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238928: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x238928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23892c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23892cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x238930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238934: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x238934u;
    {
        const bool branch_taken_0x238934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x238934) {
            ctx->pc = 0x2389C8u;
            goto label_2389c8;
        }
    }
    ctx->pc = 0x23893Cu;
    // 0x23893c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23893Cu;
    {
        const bool branch_taken_0x23893c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23893c) {
            ctx->pc = 0x23894Cu;
            goto label_23894c;
        }
    }
    ctx->pc = 0x238944u;
    // 0x238944: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x238944u;
    {
        const bool branch_taken_0x238944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238944) {
            ctx->pc = 0x238A14u;
            goto label_238a14;
        }
    }
    ctx->pc = 0x23894Cu;
label_23894c:
    // 0x23894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238954: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x238954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x238958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23895c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238964: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x238964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x238968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23896c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238970: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238974: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x238974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x238978: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23897c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238988: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23898c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x238990: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x238994: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23899c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2389a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2389a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2389a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2389a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2389b4: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x2389b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x2389b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2389c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2389C0u;
    SET_GPR_U32(ctx, 31, 0x2389C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2389C0u, 0x2389C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389C8u;
label_2389c8:
    // 0x2389c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2389d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2389D0u;
    SET_GPR_U32(ctx, 31, 0x2389D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2389D0u, 0x2389D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389dc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2389DCu;
    SET_GPR_U32(ctx, 31, 0x2389E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2389DCu, 0x2389E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389E4u;
label_2389e4:
    // 0x2389e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2389e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2389ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2389ECu;
    {
        const bool branch_taken_0x2389ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2389ec) {
            ctx->pc = 0x238A14u;
            goto label_238a14;
        }
    }
    ctx->pc = 0x2389F4u;
    // 0x2389f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2389fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x238a00: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x238a04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x238a0c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x238A0Cu;
    SET_GPR_U32(ctx, 31, 0x238A14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x238A0Cu, 0x238A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A14u;
label_238a14:
    // 0x238a14: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x238a14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x238a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x238a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x238A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A24u;
}
