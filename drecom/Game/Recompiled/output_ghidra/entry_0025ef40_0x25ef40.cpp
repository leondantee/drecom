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

// Function: entry_0025ef40
// Address: 0x25ef40 - 0x25efa0
void entry_0025ef40_0x25ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ef40_0x25ef40");
#endif

    switch (ctx->pc) {
        case 0x25ef60u: goto label_25ef60;
        default: break;
    }

    ctx->pc = 0x25ef40u;

    // 0x25ef40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef44: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ef48: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25ef4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EF4Cu;
    {
        const bool branch_taken_0x25ef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef4c) {
            ctx->pc = 0x25EFA0u;
            return;
        }
    }
    ctx->pc = 0x25EF54u;
    // 0x25ef54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ef58: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EF58u;
    SET_GPR_U32(ctx, 31, 0x25EF60u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EF60u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EF60u) { return; }
    ctx->pc = 0x25EF60u;
label_25ef60:
    // 0x25ef60: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef64: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ef6c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef70: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef74: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ef74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ef78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef7c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef80: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ef80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ef84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef8c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ef90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ef94: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25ef98: 0xc067618  jal         func_19D860
    ctx->pc = 0x25EF98u;
    SET_GPR_U32(ctx, 31, 0x25EFA0u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25EF98u, 0x25EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFA0u;
}
