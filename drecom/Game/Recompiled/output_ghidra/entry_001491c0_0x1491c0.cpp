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

// Function: entry_001491c0
// Address: 0x1491c0 - 0x149230
void entry_001491c0_0x1491c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001491c0_0x1491c0");
#endif

    switch (ctx->pc) {
        case 0x1491d4u: goto label_1491d4;
        case 0x1491e0u: goto label_1491e0;
        default: break;
    }

    ctx->pc = 0x1491c0u;

    // 0x1491c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1491c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1491c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1491c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1491cc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1491CCu;
    SET_GPR_U32(ctx, 31, 0x1491D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1491CCu, 0x1491D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491D4u;
label_1491d4:
    // 0x1491d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1491d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1491d8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1491D8u;
    SET_GPR_U32(ctx, 31, 0x1491E0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1491D8u, 0x1491E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491E0u;
label_1491e0:
    // 0x1491e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1491e4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1491e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1491e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1491ec: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1491ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1491f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1491f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1491f4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1491f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1491f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1491fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1491fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x149200: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x149200u;
    {
        const bool branch_taken_0x149200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149200) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x149208u;
    // 0x149208: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14920c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x149210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149214: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x149218: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14921c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x14921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149224: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x149224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x149228: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x149228u;
    {
        const bool branch_taken_0x149228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149228) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x149230u;
}
