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

// Function: entry_001844bc
// Address: 0x1844bc - 0x184524
void entry_001844bc_0x1844bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001844bc_0x1844bc");
#endif

    switch (ctx->pc) {
        case 0x1844d4u: goto label_1844d4;
        case 0x1844ecu: goto label_1844ec;
        default: break;
    }

    ctx->pc = 0x1844bcu;

    // 0x1844bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1844c4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1844c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844CCu;
    SET_GPR_U32(ctx, 31, 0x1844D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844CCu, 0x1844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844D4u;
label_1844d4:
    // 0x1844d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1844dc: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1844e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844E4u;
    SET_GPR_U32(ctx, 31, 0x1844ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844E4u, 0x1844ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844ECu;
label_1844ec:
    // 0x1844ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844f0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1844f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1844f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1844f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1844f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844fc: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1844fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184500: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x184500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184504: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184508: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x184508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18450c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184510: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184514: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x184514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x184518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18451c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18451Cu;
    {
        const bool branch_taken_0x18451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18451c) {
            ctx->pc = 0x18459Cu;
            return;
        }
    }
    ctx->pc = 0x184524u;
}
