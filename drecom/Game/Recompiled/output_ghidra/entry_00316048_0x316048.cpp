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

// Function: entry_00316048
// Address: 0x316048 - 0x3160f0
void entry_00316048_0x316048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316048_0x316048");
#endif

    switch (ctx->pc) {
        case 0x3160dcu: goto label_3160dc;
        default: break;
    }

    ctx->pc = 0x316048u;

    // 0x316048: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31604c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31604cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316058: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x316058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31605c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x31605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316060: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x316064: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x316068: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x316068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31606c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316074: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x316074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316078: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31607c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31607cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316088: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31608c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31608cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316090: 0x0  nop
    ctx->pc = 0x316090u;
    // NOP
    // 0x316094: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x316094u;
    {
        const bool branch_taken_0x316094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316094) {
            ctx->pc = 0x3160F0u;
            return;
        }
    }
    ctx->pc = 0x31609Cu;
    // 0x31609c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3160a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160a8: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3160a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3160ac: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x3160b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3160b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3160b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160bc: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3160bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3160c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3160c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3160c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3160c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160d0: 0xac44128c  sw          $a0, 0x128C($v0)
    ctx->pc = 0x3160d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 4));
    // 0x3160d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3160D4u;
    SET_GPR_U32(ctx, 31, 0x3160DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3160D4u, 0x3160DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3160DCu;
label_3160dc:
    // 0x3160dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3160dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3160e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3160e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160e4: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x3160e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
    // 0x3160e8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3160E8u;
    {
        const bool branch_taken_0x3160e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3160e8) {
            ctx->pc = 0x3161E0u;
            return;
        }
    }
    ctx->pc = 0x3160F0u;
}
