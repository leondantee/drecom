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

// Function: entry_001e51a0
// Address: 0x1e51a0 - 0x1e52a8
void entry_001e51a0_0x1e51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e51a0_0x1e51a0");
#endif

    switch (ctx->pc) {
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5258u: goto label_1e5258;
        default: break;
    }

    ctx->pc = 0x1e51a0u;

    // 0x1e51a0: 0x3c024507  lui         $v0, 0x4507
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17671 << 16));
    // 0x1e51a4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1e51a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1e51a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e51ac: 0x0  nop
    ctx->pc = 0x1e51acu;
    // NOP
    // 0x1e51b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e51b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e51b4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1e51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e51b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e51bc: 0xc42005f0  lwc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e51bcu;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e51c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e51c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e51c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e51c8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1e51cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e51ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e51d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e51d4: 0x0  nop
    ctx->pc = 0x1e51d4u;
    // NOP
    // 0x1e51d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e51d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e51dc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1e51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e51e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e51e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e51e4: 0xc4200600  lwc1        $f0, 0x600($at)
    ctx->pc = 0x1e51e4u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e51e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e51ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e51ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e51f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e51f4: 0x8c5101ec  lw          $s1, 0x1EC($v0)
    ctx->pc = 0x1e51f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x1e51f8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e51fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e5200: 0x2446c5f0  addiu       $a2, $v0, -0x3A10
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x1e5204: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1e5204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5208: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e5208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e520c: 0xc079500  jal         func_1E5400
    ctx->pc = 0x1E520Cu;
    SET_GPR_U32(ctx, 31, 0x1E5214u);
    ctx->pc = 0x1E5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5400u, 0x1E520Cu, 0x1E5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5214u;
label_1e5214:
    // 0x1e5214: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e5218: 0x2446c5f0  addiu       $a2, $v0, -0x3A10
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x1e521c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e5220: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e5220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e5224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5228: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e522c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5234: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e5238: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1e523c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e5240: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1e5244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5248: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e5248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e524c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5250: 0xc0798ec  jal         func_1E63B0
    ctx->pc = 0x1E5250u;
    SET_GPR_U32(ctx, 31, 0x1E5258u);
    ctx->pc = 0x1E63B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63B0u, 0x1E5250u, 0x1E5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5258u;
label_1e5258:
    // 0x1e5258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e525c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e5260: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e5264: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e526c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5270: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1e5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1e5274: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e5274u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5278: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e527c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E527Cu;
    {
        const bool branch_taken_0x1e527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e527c) {
            ctx->pc = 0x1E52A8u;
            return;
        }
    }
    ctx->pc = 0x1E5284u;
    // 0x1e5284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e5284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e5288: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e528c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5290: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5294: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e529c: 0x8c4401f0  lw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e52a0: 0xc0792dc  jal         func_1E4B70
    ctx->pc = 0x1E52A0u;
    SET_GPR_U32(ctx, 31, 0x1E52A8u);
    ctx->pc = 0x1E4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4B70u, 0x1E52A0u, 0x1E52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52A8u;
}
