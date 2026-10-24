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

// Function: default
// Address: 0x20ef64 - 0x20f008
void ps2_default_0x20ef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x20ef64");
#endif

    switch (ctx->pc) {
        case 0x20efc0u: goto label_20efc0;
        default: break;
    }

    ctx->pc = 0x20ef64u;

    // 0x20ef64: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef68: 0x85451278  lh          $a1, 0x1278($t2)
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20ef6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20ef70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ef70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20ef74: 0x286402bc  slti        $a0, $v1, 0x2BC
    ctx->pc = 0x20ef74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x20ef78: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20EF78u;
    {
        const bool branch_taken_0x20ef78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ef78) {
            ctx->pc = 0x20F008u;
            return;
        }
    }
    ctx->pc = 0x20EF80u;
    // 0x20ef80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20ef80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ef84: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x20ef8c: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x20ef8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20ef90: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef94: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x20ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x20ef98: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef9c: 0x8ce802d0  lw          $t0, 0x2D0($a3)
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
    // 0x20efa0: 0x3c053d23  lui         $a1, 0x3D23
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15651 << 16));
    // 0x20efa4: 0x34a3d70a  ori         $v1, $a1, 0xD70A
    ctx->pc = 0x20efa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x20efa8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20efa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20efac: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x20efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20efb0: 0xc500011c  lwc1        $f0, 0x11C($t0)
    ctx->pc = 0x20efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20efb4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x20efb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x20efb8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20EFB8u;
    SET_GPR_U32(ctx, 31, 0x20EFC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20EFB8u, 0x20EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFC0u;
label_20efc0:
    // 0x20efc0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20efc4: 0x8c6602d0  lw          $a2, 0x2D0($v1)
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x20efc8: 0xe4c0011c  swc1        $f0, 0x11C($a2)
    ctx->pc = 0x20efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 284), bits); }
    // 0x20efcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20efd0: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20efd4: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x20efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x20efd8: 0xe4a00120  swc1        $f0, 0x120($a1)
    ctx->pc = 0x20efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x20efdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20efe0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20efe4: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x20efe8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x20efe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x20efec: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eff0: 0x8c8702d0  lw          $a3, 0x2D0($a0)
    ctx->pc = 0x20eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x20eff4: 0x94e30140  lhu         $v1, 0x140($a3)
    ctx->pc = 0x20eff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 320)));
    // 0x20eff8: 0x34660002  ori         $a2, $v1, 0x2
    ctx->pc = 0x20eff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x20effc: 0xa4e60140  sh          $a2, 0x140($a3)
    ctx->pc = 0x20effcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 320), (uint16_t)GPR_U32(ctx, 6));
    // 0x20f000: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20F000u;
    {
        const bool branch_taken_0x20f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f000) {
            ctx->pc = 0x20F0A8u;
            return;
        }
    }
    ctx->pc = 0x20F008u;
}
