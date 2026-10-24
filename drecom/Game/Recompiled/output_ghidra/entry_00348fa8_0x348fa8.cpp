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

// Function: entry_00348fa8
// Address: 0x348fa8 - 0x349080
void entry_00348fa8_0x348fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348fa8_0x348fa8");
#endif

    switch (ctx->pc) {
        case 0x348fd4u: goto label_348fd4;
        default: break;
    }

    ctx->pc = 0x348fa8u;

    // 0x348fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fb0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x348fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x348fb4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x348fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fb8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x348fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x348fc0: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x348fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x348fc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348fcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348FCCu;
    SET_GPR_U32(ctx, 31, 0x348FD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348FCCu, 0x348FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FD4u;
label_348fd4:
    // 0x348fd4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fd8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x348fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348fdc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x348fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x348fe0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x348fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x348fe4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x348fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x348fe8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x348fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x348fec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348ff0: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x348ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x348ff4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x348ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348ff8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348ffc: 0x24710960  addiu       $s1, $v1, 0x960
    ctx->pc = 0x348ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x349000: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x349000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x349004: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x349004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349008: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x349008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34900c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34900cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x349010: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x349010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x349014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x349014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349018: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34901c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349020: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349024: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349028: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x34902c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34902cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349030: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x349038: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34903c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x349040: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x349040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x349044: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349048: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x349048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34904c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349050: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x349050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x349054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349058: 0x0  nop
    ctx->pc = 0x349058u;
    // NOP
    // 0x34905c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34905cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349060: 0x0  nop
    ctx->pc = 0x349060u;
    // NOP
    // 0x349064: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x349064u;
    {
        const bool branch_taken_0x349064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349064) {
            ctx->pc = 0x349080u;
            return;
        }
    }
    ctx->pc = 0x34906Cu;
    // 0x34906c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x34906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x349070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349074: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349078: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34907c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x349080u;
}
