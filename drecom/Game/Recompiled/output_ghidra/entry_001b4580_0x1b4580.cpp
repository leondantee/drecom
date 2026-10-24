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

// Function: entry_001b4580
// Address: 0x1b4580 - 0x1b45e0
void entry_001b4580_0x1b4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4580_0x1b4580");
#endif

    switch (ctx->pc) {
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45acu: goto label_1b45ac;
        default: break;
    }

    ctx->pc = 0x1b4580u;

    // 0x1b4580: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b4584: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4588: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b458c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b4590: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b4594: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B4594u;
    SET_GPR_U32(ctx, 31, 0x1B459Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B4594u, 0x1B459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B459Cu;
label_1b459c:
    // 0x1b459c: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1b459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b45a0: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1b45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b45a4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B45A4u;
    SET_GPR_U32(ctx, 31, 0x1B45ACu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B45A4u, 0x1B45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45ACu;
label_1b45ac:
    // 0x1b45ac: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b45b0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b45b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b45b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b45b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b45b8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b45bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B45BCu;
    {
        const bool branch_taken_0x1b45bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45bc) {
            ctx->pc = 0x1B45E0u;
            return;
        }
    }
    ctx->pc = 0x1B45C4u;
    // 0x1b45c4: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b45c8: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b45c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b45cc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45d0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b45d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b45d4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b45d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b45d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B45D8u;
    {
        const bool branch_taken_0x1b45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45d8) {
            ctx->pc = 0x1B45F8u;
            return;
        }
    }
    ctx->pc = 0x1B45E0u;
}
