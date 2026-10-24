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

// Function: entry_00371900
// Address: 0x371900 - 0x371954
void entry_00371900_0x371900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371900_0x371900");
#endif

    switch (ctx->pc) {
        case 0x37191cu: goto label_37191c;
        case 0x37194cu: goto label_37194c;
        default: break;
    }

    ctx->pc = 0x371900u;

    // 0x371900: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371904: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371908: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x371908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x37190c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x37190cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371910: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371914: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371914u;
    SET_GPR_U32(ctx, 31, 0x37191Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371914u, 0x37191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37191Cu;
label_37191c:
    // 0x37191c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371920: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371924: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37192c: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x37192cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x371930: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x371930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x371934: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x371934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x371938: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37193c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x37193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371940: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x371940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x371944: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x371944u;
    SET_GPR_U32(ctx, 31, 0x37194Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x371944u, 0x37194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37194Cu;
label_37194c:
    // 0x37194c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371950: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x371950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x371954u;
}
