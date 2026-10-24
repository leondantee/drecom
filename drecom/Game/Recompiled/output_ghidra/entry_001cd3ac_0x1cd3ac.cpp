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

// Function: entry_001cd3ac
// Address: 0x1cd3ac - 0x1cd428
void entry_001cd3ac_0x1cd3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd3ac_0x1cd3ac");
#endif

    switch (ctx->pc) {
        case 0x1cd424u: goto label_1cd424;
        default: break;
    }

    ctx->pc = 0x1cd3acu;

    // 0x1cd3ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3b0: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cd3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1cd3b4: 0x106001ee  beqz        $v1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x1CD3B4u;
    {
        const bool branch_taken_0x1cd3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3b4) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD3BCu;
    // 0x1cd3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3c0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd3c4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1cd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1cd3c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1cd3cc: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CD3CCu;
    {
        const bool branch_taken_0x1cd3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3cc) {
            ctx->pc = 0x1CD490u;
            return;
        }
    }
    ctx->pc = 0x1CD3D4u;
    // 0x1cd3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd3d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3dc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cd3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cd3e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3e4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cd3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3ec: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cd3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cd3f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3f4: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cd3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd3fc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cd3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cd400: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd404: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cd404u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd408: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd40c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cd410: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD410u;
    {
        const bool branch_taken_0x1cd410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd410) {
            ctx->pc = 0x1CD428u;
            return;
        }
    }
    ctx->pc = 0x1CD418u;
    // 0x1cd418: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd41c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CD41Cu;
    SET_GPR_U32(ctx, 31, 0x1CD424u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CD41Cu, 0x1CD424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD424u;
label_1cd424:
    // 0x1cd424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cd428u;
}
