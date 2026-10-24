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

// Function: entry_0025b1d4
// Address: 0x25b1d4 - 0x25b274
void entry_0025b1d4_0x25b1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b1d4_0x25b1d4");
#endif

    switch (ctx->pc) {
        case 0x25b200u: goto label_25b200;
        case 0x25b25cu: goto label_25b25c;
        default: break;
    }

    ctx->pc = 0x25b1d4u;

    // 0x25b1d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b1d8: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25b1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x25b1dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b1e0: 0x8c4205f0  lw          $v0, 0x5F0($v0)
    ctx->pc = 0x25b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x25b1e4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25B1E4u;
    {
        const bool branch_taken_0x25b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b1e4) {
            ctx->pc = 0x25B274u;
            return;
        }
    }
    ctx->pc = 0x25B1ECu;
    // 0x25b1ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b1f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b1f4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x25b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25b1f8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25B1F8u;
    SET_GPR_U32(ctx, 31, 0x25B200u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25B200u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B200u) { return; }
    ctx->pc = 0x25B200u;
label_25b200:
    // 0x25b200: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b204: 0xc44009d0  lwc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b208: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x25b208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25b20c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b210: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b214: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25b214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25b218: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b21c: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25b21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25b220: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x25b220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b224: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25b228: 0xa7a2001a  sh          $v0, 0x1A($sp)
    ctx->pc = 0x25b228u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b22c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b230: 0x8c4205f0  lw          $v0, 0x5F0($v0)
    ctx->pc = 0x25b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x25b234: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x25b234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x25b238: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b23c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x25b23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25b240: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x25b240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b244: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b248: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b24c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x25b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25b250: 0x244605fc  addiu       $a2, $v0, 0x5FC
    ctx->pc = 0x25b250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1532));
    // 0x25b254: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25B254u;
    SET_GPR_U32(ctx, 31, 0x25B25Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25B254u, 0x25B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B25Cu;
label_25b25c:
    // 0x25b25c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b264: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x25b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25b268: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x25b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x25b26c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B26Cu;
    {
        const bool branch_taken_0x25b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b26c) {
            ctx->pc = 0x25B280u;
            return;
        }
    }
    ctx->pc = 0x25B274u;
}
