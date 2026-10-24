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

// Function: entry_00224294
// Address: 0x224294 - 0x224340
void entry_00224294_0x224294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224294_0x224294");
#endif

    switch (ctx->pc) {
        case 0x2242b0u: goto label_2242b0;
        default: break;
    }

    ctx->pc = 0x224294u;

    // 0x224294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x224298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22429c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x22429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2242a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2242a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2242a4: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2242a8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2242A8u;
    SET_GPR_U32(ctx, 31, 0x2242B0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2242A8u, 0x2242B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B0u;
label_2242b0:
    // 0x2242b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2242b4: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x2242b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x2242b8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x2242b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x2242bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2242bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2242c0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2242c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2242c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2242c8: 0x0  nop
    ctx->pc = 0x2242c8u;
    // NOP
    // 0x2242cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2242CCu;
    {
        const bool branch_taken_0x2242cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2242cc) {
            ctx->pc = 0x224340u;
            return;
        }
    }
    ctx->pc = 0x2242D4u;
    // 0x2242d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2242d8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2242d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2242dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2242dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2242e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2242e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2242e4: 0x0  nop
    ctx->pc = 0x2242e4u;
    // NOP
    // 0x2242e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2242e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2242ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2242f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2242f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2242f4: 0x0  nop
    ctx->pc = 0x2242f4u;
    // NOP
    // 0x2242f8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2242F8u;
    {
        const bool branch_taken_0x2242f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2242f8) {
            ctx->pc = 0x224340u;
            return;
        }
    }
    ctx->pc = 0x224300u;
    // 0x224300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224304: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x224304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224308: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22430c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22430cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224310: 0x0  nop
    ctx->pc = 0x224310u;
    // NOP
    // 0x224314: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x224314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224318: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x224318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22431c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22431cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224320: 0x0  nop
    ctx->pc = 0x224320u;
    // NOP
    // 0x224324: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x224324u;
    {
        const bool branch_taken_0x224324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224324) {
            ctx->pc = 0x224340u;
            return;
        }
    }
    ctx->pc = 0x22432Cu;
    // 0x22432c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224330: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224334: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x224334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224338: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22433c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22433cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x224340u;
}
