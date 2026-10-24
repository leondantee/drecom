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

// Function: entry_001ce158
// Address: 0x1ce158 - 0x1ce1c4
void entry_001ce158_0x1ce158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce158_0x1ce158");
#endif

    switch (ctx->pc) {
        case 0x1ce1c0u: goto label_1ce1c0;
        default: break;
    }

    ctx->pc = 0x1ce158u;

    // 0x1ce158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce15c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce160: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ce164: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce168: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CE168u;
    {
        const bool branch_taken_0x1ce168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce168) {
            ctx->pc = 0x1CE22Cu;
            return;
        }
    }
    ctx->pc = 0x1CE170u;
    // 0x1ce170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce178: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ce178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ce17c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce180: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ce180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce184: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce188: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1ce188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1ce18c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce190: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ce190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce198: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1ce198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1ce19c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1a0: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1ce1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce1a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1a8: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce1ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE1ACu;
    {
        const bool branch_taken_0x1ce1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1ac) {
            ctx->pc = 0x1CE1C4u;
            return;
        }
    }
    ctx->pc = 0x1CE1B4u;
    // 0x1ce1b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1b8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CE1B8u;
    SET_GPR_U32(ctx, 31, 0x1CE1C0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CE1B8u, 0x1CE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1C0u;
label_1ce1c0:
    // 0x1ce1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ce1c4u;
}
