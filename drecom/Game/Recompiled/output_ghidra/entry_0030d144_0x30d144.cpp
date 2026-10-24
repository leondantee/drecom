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

// Function: entry_0030d144
// Address: 0x30d144 - 0x30d1ac
void entry_0030d144_0x30d144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d144_0x30d144");
#endif

    switch (ctx->pc) {
        case 0x30d188u: goto label_30d188;
        case 0x30d19cu: goto label_30d19c;
        default: break;
    }

    ctx->pc = 0x30d144u;

    // 0x30d144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d148: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30d148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30d14c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30d150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30d154: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30D154u;
    {
        const bool branch_taken_0x30d154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d154) {
            ctx->pc = 0x30D1ACu;
            return;
        }
    }
    ctx->pc = 0x30D15Cu;
    // 0x30d15c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d160: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d168: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x30d16c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30d170: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d174: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d178: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d17c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d180: 0xc05c848  jal         func_172120
    ctx->pc = 0x30D180u;
    SET_GPR_U32(ctx, 31, 0x30D188u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30D180u, 0x30D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D188u;
label_30d188:
    // 0x30d188: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d18c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d190: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30d190u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30d194: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D194u;
    SET_GPR_U32(ctx, 31, 0x30D19Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D194u, 0x30D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D19Cu;
label_30d19c:
    // 0x30d19c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30d1a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D1A4u;
    {
        const bool branch_taken_0x30d1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d1a4) {
            ctx->pc = 0x30D1F4u;
            return;
        }
    }
    ctx->pc = 0x30D1ACu;
}
