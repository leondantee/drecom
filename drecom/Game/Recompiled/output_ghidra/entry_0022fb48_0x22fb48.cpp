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

// Function: entry_0022fb48
// Address: 0x22fb48 - 0x22fc4c
void entry_0022fb48_0x22fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fb48_0x22fb48");
#endif

    switch (ctx->pc) {
        case 0x22fc40u: goto label_22fc40;
        default: break;
    }

    ctx->pc = 0x22fb48u;

    // 0x22fb48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb50: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x22fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb58: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb60: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22fb64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb6c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x22fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb74: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb7c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22fb80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb88: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb90: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x22fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb98: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x22fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x22fb9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fba0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fba4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fba8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbb0: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbb8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22fbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22fbbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fbc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fbc4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fbc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbd0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbd8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22fbdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fbe0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fbe4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fbe8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbf0: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x22fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbf8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22fbfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc04: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22fc08: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22fc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22fc0c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22FC0Cu;
    {
        const bool branch_taken_0x22fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fc0c) {
            ctx->pc = 0x22FC4Cu;
            return;
        }
    }
    ctx->pc = 0x22FC14u;
    // 0x22fc14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc18: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22fc28: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22fc2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22fc30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22fc34: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22fc38: 0xc05c848  jal         func_172120
    ctx->pc = 0x22FC38u;
    SET_GPR_U32(ctx, 31, 0x22FC40u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22FC38u, 0x22FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22fc44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22FC44u;
    {
        const bool branch_taken_0x22fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc44) {
            ctx->pc = 0x22FC90u;
            return;
        }
    }
    ctx->pc = 0x22FC4Cu;
}
