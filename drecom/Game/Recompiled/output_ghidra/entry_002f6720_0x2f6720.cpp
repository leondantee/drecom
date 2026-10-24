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

// Function: entry_002f6720
// Address: 0x2f6720 - 0x2f6788
void entry_002f6720_0x2f6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6720_0x2f6720");
#endif

    switch (ctx->pc) {
        case 0x2f677cu: goto label_2f677c;
        default: break;
    }

    ctx->pc = 0x2f6720u;

    // 0x2f6720: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6724: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f6724u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f6728: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f6728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f672c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6730: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x2f6730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
    // 0x2f6734: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f6734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6738: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f6738u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f673c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2f673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f6740: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2f6740u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2f6744: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6744u;
    {
        const bool branch_taken_0x2f6744 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f6744) {
            ctx->pc = 0x2F6790u;
            return;
        }
    }
    ctx->pc = 0x2F674Cu;
    // 0x2f674c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6750: 0xa420f1ac  sh          $zero, -0xE54($at)
    ctx->pc = 0x2f6750u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x2f6754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f675c: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x2f675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2f6760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6764: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f6764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f6768: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f6768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f676c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6770: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6774: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2F6774u;
    SET_GPR_U32(ctx, 31, 0x2F677Cu);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2F6774u, 0x2F677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F677Cu;
label_2f677c:
    // 0x2f677c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6780: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2f6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f6784: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2f6788u;
}
