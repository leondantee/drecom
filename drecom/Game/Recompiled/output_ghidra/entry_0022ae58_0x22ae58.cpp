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

// Function: entry_0022ae58
// Address: 0x22ae58 - 0x22af10
void entry_0022ae58_0x22ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ae58_0x22ae58");
#endif

    switch (ctx->pc) {
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae74u: goto label_22ae74;
        default: break;
    }

    ctx->pc = 0x22ae58u;

    // 0x22ae58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22ae60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22AE60u;
    SET_GPR_U32(ctx, 31, 0x22AE68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22AE60u, 0x22AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE68u;
label_22ae68:
    // 0x22ae68: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae6c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22AE6Cu, 0x22AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae78: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x22ae78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22ae7c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x22ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22ae80: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x22ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x22ae84: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x22AE84u;
    {
        const bool branch_taken_0x22ae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae84) {
            ctx->pc = 0x22B1FCu;
            return;
        }
    }
    ctx->pc = 0x22AE8Cu;
    // 0x22ae8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ae90: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae94: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22ae94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22ae98: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae9c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22aea0: 0x24620880  addiu       $v0, $v1, 0x880
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x22aea4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22aea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aeac: 0x0  nop
    ctx->pc = 0x22aeacu;
    // NOP
    // 0x22aeb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22aeb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aeb8: 0x0  nop
    ctx->pc = 0x22aeb8u;
    // NOP
    // 0x22aebc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22aec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aec4: 0x0  nop
    ctx->pc = 0x22aec4u;
    // NOP
    // 0x22aec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22aecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22aed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aed4: 0x0  nop
    ctx->pc = 0x22aed4u;
    // NOP
    // 0x22aed8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22aed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22aedc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22aee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aee4: 0x0  nop
    ctx->pc = 0x22aee4u;
    // NOP
    // 0x22aee8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22aee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22aeec: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x22aeecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x22aef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22aef4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22aef8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22aefc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x22af00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AF00u;
    {
        const bool branch_taken_0x22af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af00) {
            ctx->pc = 0x22AF10u;
            return;
        }
    }
    ctx->pc = 0x22AF08u;
    // 0x22af08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22af0c: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22af0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x22af10u;
}
