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

// Function: entry_001ce7a4
// Address: 0x1ce7a4 - 0x1ce810
void entry_001ce7a4_0x1ce7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce7a4_0x1ce7a4");
#endif

    switch (ctx->pc) {
        case 0x1ce80cu: goto label_1ce80c;
        default: break;
    }

    ctx->pc = 0x1ce7a4u;

    // 0x1ce7a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce7ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ce7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ce7b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce7b4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CE7B4u;
    {
        const bool branch_taken_0x1ce7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7b4) {
            ctx->pc = 0x1CE878u;
            return;
        }
    }
    ctx->pc = 0x1CE7BCu;
    // 0x1ce7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7c4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ce7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ce7c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7cc: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ce7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce7d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7d4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ce7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ce7d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7dc: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1ce7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce7e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7e4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1ce7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1ce7e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7ec: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ce7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce7f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7f4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ce7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce7f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7F8u;
    {
        const bool branch_taken_0x1ce7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7f8) {
            ctx->pc = 0x1CE810u;
            return;
        }
    }
    ctx->pc = 0x1CE800u;
    // 0x1ce800: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce804: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CE804u, 0x1CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce80cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ce810u;
}
