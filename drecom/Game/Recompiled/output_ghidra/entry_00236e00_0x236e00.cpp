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

// Function: entry_00236e00
// Address: 0x236e00 - 0x236f14
void entry_00236e00_0x236e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236e00_0x236e00");
#endif

    switch (ctx->pc) {
        case 0x236e5cu: goto label_236e5c;
        case 0x236e98u: goto label_236e98;
        default: break;
    }

    ctx->pc = 0x236e00u;

label_236e00:
    // 0x236e00: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x236e00u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236e04: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x236e04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236e08: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x236e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x236e0c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x236e10: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x236e10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x236e14: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x236e14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
    // 0x236e18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x236e1c: 0x1d20fff8  bgtz        $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x236E1Cu;
    {
        const bool branch_taken_0x236e1c = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x236e1c) {
            ctx->pc = 0x236E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236e00;
        }
    }
    ctx->pc = 0x236E24u;
    // 0x236e24: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x236e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236e28: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x236e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x236e2c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236e30: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236e34: 0x90861308  lbu         $a2, 0x1308($a0)
    ctx->pc = 0x236e34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x236e38: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x236e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x236e3c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x236e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x236e40: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x236e44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x236e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236e48: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x236e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x236e4c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x236e4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236e50: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x236e50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x236e54: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x236E54u;
    SET_GPR_U32(ctx, 31, 0x236E5Cu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x236E54u, 0x236E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E5Cu;
label_236e5c:
    // 0x236e5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236e5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236e60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x236e60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x236e64: 0x26060a40  addiu       $a2, $s0, 0xA40
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
    // 0x236e68: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x236e68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236e6c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x236e70: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x236e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x236e74: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x236e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x236e78: 0x3c072402  lui         $a3, 0x2402
    ctx->pc = 0x236e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9218 << 16));
    // 0x236e7c: 0x34e61400  ori         $a2, $a3, 0x1400
    ctx->pc = 0x236e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5120);
    // 0x236e80: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x236e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x236e84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x236e84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236e88: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x236e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x236e8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x236e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236e90: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x236E90u;
    SET_GPR_U32(ctx, 31, 0x236E98u);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x236E90u, 0x236E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E98u;
label_236e98:
    // 0x236e98: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236e98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236e9c: 0x8fa702e8  lw          $a3, 0x2E8($sp)
    ctx->pc = 0x236e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236ea0: 0x8ce20294  lw          $v0, 0x294($a3)
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 660)));
    // 0x236ea4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236ea4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236ea8: 0x3c093126  lui         $t1, 0x3126
    ctx->pc = 0x236ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12582 << 16));
    // 0x236eac: 0x35284000  ori         $t0, $t1, 0x4000
    ctx->pc = 0x236eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x236eb0: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x236eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x236eb4: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x236eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236eb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x236ebc: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x236ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x236ec0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x236ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x236ec4: 0x34a43000  ori         $a0, $a1, 0x3000
    ctx->pc = 0x236ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x236ec8: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x236ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x236ecc: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236ed0: 0x8c420298  lw          $v0, 0x298($v0)
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
    // 0x236ed4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236ed4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236ed8: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x236ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x236edc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x236edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x236ee0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x236ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x236ee4: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x236ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236ee8: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x236ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x236eec: 0xfe060070  sd          $a2, 0x70($s0)
    ctx->pc = 0x236eecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 6));
    // 0x236ef0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x236ef4: 0x34623000  ori         $v0, $v1, 0x3000
    ctx->pc = 0x236ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x236ef8: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x236ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x236efc: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x236efcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x236f00: 0x263eb170  addiu       $fp, $s1, -0x4E90
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947184));
    // 0x236f04: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x236f08: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236f0c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x236f0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x236f10: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x236f10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x236f14u;
}
