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

// Function: entry_001dc6ec
// Address: 0x1dc6ec - 0x1dc794
void entry_001dc6ec_0x1dc6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc6ec_0x1dc6ec");
#endif

    switch (ctx->pc) {
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc730u: goto label_1dc730;
        default: break;
    }

    ctx->pc = 0x1dc6ecu;

    // 0x1dc6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc6f0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1dc6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dc6f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc6f8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dc6fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc700: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1dc704: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1dc704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1dc708: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1DC708u;
    SET_GPR_U32(ctx, 31, 0x1DC710u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1DC708u, 0x1DC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC710u;
label_1dc710:
    // 0x1dc710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc718: 0x0  nop
    ctx->pc = 0x1dc718u;
    // NOP
    // 0x1dc71c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1dc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dc720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc724: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc728: 0xc040c24  jal         func_103090
    ctx->pc = 0x1DC728u;
    SET_GPR_U32(ctx, 31, 0x1DC730u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1DC730u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC730u) { return; }
    ctx->pc = 0x1DC730u;
label_1dc730:
    // 0x1dc730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc734: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc738: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc73c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1dc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc744: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dc748: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc74c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dc74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc750: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dc750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dc754: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1dc754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1dc758: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC758u;
    {
        const bool branch_taken_0x1dc758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc758) {
            ctx->pc = 0x1DC7CCu;
            return;
        }
    }
    ctx->pc = 0x1DC760u;
    // 0x1dc760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc764: 0x0  nop
    ctx->pc = 0x1dc764u;
    // NOP
    // 0x1dc768: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1dc768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1dc76c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc770: 0x8c230144  lw          $v1, 0x144($at)
    ctx->pc = 0x1dc770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0144u));
    // 0x1dc774: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC774u;
    {
        const bool branch_taken_0x1dc774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc774) {
            ctx->pc = 0x1DC794u;
            return;
        }
    }
    ctx->pc = 0x1DC77Cu;
    // 0x1dc77c: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
    // 0x1dc780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dc780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc784: 0x0  nop
    ctx->pc = 0x1dc784u;
    // NOP
    // 0x1dc788: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dc78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC78Cu;
    {
        const bool branch_taken_0x1dc78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc78c) {
            ctx->pc = 0x1DC7A0u;
            return;
        }
    }
    ctx->pc = 0x1DC794u;
}
