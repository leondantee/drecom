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

// Function: entry_0025f538
// Address: 0x25f538 - 0x25f590
void entry_0025f538_0x25f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f538_0x25f538");
#endif

    switch (ctx->pc) {
        case 0x25f558u: goto label_25f558;
        case 0x25f584u: goto label_25f584;
        default: break;
    }

    ctx->pc = 0x25f538u;

    // 0x25f538: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f53c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f540: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25f544: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F544u;
    {
        const bool branch_taken_0x25f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f544) {
            ctx->pc = 0x25F590u;
            return;
        }
    }
    ctx->pc = 0x25F54Cu;
    // 0x25f54c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f550: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F550u;
    SET_GPR_U32(ctx, 31, 0x25F558u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F558u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F558u) { return; }
    ctx->pc = 0x25F558u;
label_25f558:
    // 0x25f558: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f55c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f560: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f564: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f568: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f56c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f570: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25f570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f574: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f578: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f57c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F57Cu;
    SET_GPR_U32(ctx, 31, 0x25F584u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F57Cu, 0x25F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F584u;
label_25f584:
    // 0x25f584: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f588: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f58c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f58cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25f590u;
}
