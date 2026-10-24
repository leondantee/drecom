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

// Function: entry_002df8e8
// Address: 0x2df8e8 - 0x2df98c
void entry_002df8e8_0x2df8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df8e8_0x2df8e8");
#endif

    switch (ctx->pc) {
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df904u: goto label_2df904;
        case 0x2df914u: goto label_2df914;
        case 0x2df920u: goto label_2df920;
        case 0x2df94cu: goto label_2df94c;
        default: break;
    }

    ctx->pc = 0x2df8e8u;

    // 0x2df8e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df8f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF8F0u;
    SET_GPR_U32(ctx, 31, 0x2DF8F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF8F0u, 0x2DF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8F8u;
label_2df8f8:
    // 0x2df8f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF8FCu;
    SET_GPR_U32(ctx, 31, 0x2DF904u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF8FCu, 0x2DF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF904u;
label_2df904:
    // 0x2df904: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df908: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df908u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df90c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF90Cu;
    SET_GPR_U32(ctx, 31, 0x2DF914u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF90Cu, 0x2DF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF914u;
label_2df914:
    // 0x2df914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df918: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF918u;
    SET_GPR_U32(ctx, 31, 0x2DF920u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF918u, 0x2DF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF920u;
label_2df920:
    // 0x2df920: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df924: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2df924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
    // 0x2df928: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2df92c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF92Cu;
    {
        const bool branch_taken_0x2df92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df92c) {
            ctx->pc = 0x2DF98Cu;
            return;
        }
    }
    ctx->pc = 0x2DF934u;
    // 0x2df934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df938: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df93c: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2df93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df940: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2df940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df944: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DF944u;
    SET_GPR_U32(ctx, 31, 0x2DF94Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF944u, 0x2DF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF94Cu;
label_2df94c:
    // 0x2df94c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df950: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2df954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df95c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df95cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df960: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2df964: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df968: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df96c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df970: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df978: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df97c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df984: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DF984u;
    {
        const bool branch_taken_0x2df984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df984) {
            ctx->pc = 0x2DF9C8u;
            return;
        }
    }
    ctx->pc = 0x2DF98Cu;
}
