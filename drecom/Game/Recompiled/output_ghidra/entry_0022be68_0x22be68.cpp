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

// Function: entry_0022be68
// Address: 0x22be68 - 0x22bf14
void entry_0022be68_0x22be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022be68_0x22be68");
#endif

    switch (ctx->pc) {
        case 0x22be94u: goto label_22be94;
        case 0x22beb0u: goto label_22beb0;
        case 0x22bec8u: goto label_22bec8;
        case 0x22bed4u: goto label_22bed4;
        default: break;
    }

    ctx->pc = 0x22be68u;

    // 0x22be68: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be70: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x22be74: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22be78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22be78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22be7c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22be80: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22be84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22be88: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22be8c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22BE8Cu;
    SET_GPR_U32(ctx, 31, 0x22BE94u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22BE8Cu, 0x22BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE94u;
label_22be94:
    // 0x22be94: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22be94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22be98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be9c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bea0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bea4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22bea4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bea8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22BEA8u;
    SET_GPR_U32(ctx, 31, 0x22BEB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22BEA8u, 0x22BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEB0u;
label_22beb0:
    // 0x22beb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22beb4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22beb8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bebc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22bec0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22BEC0u;
    SET_GPR_U32(ctx, 31, 0x22BEC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22BEC0u, 0x22BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEC8u;
label_22bec8:
    // 0x22bec8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22becc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22BECCu;
    SET_GPR_U32(ctx, 31, 0x22BED4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22BECCu, 0x22BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BED4u;
label_22bed4:
    // 0x22bed4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bed8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22bed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22bedc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22bedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22bee0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22bee4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22BEE4u;
    {
        const bool branch_taken_0x22bee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bee4) {
            ctx->pc = 0x22BF14u;
            return;
        }
    }
    ctx->pc = 0x22BEECu;
    // 0x22beec: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x22beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22bef0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x22bef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x22bef4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22bef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22bef8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22befc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BEFCu;
    {
        const bool branch_taken_0x22befc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22befc) {
            ctx->pc = 0x22BF14u;
            return;
        }
    }
    ctx->pc = 0x22BF04u;
    // 0x22bf04: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x22bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22bf08: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x22bf08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22bf0c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x22bf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x22bf10: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x22bf10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22bf14u;
}
