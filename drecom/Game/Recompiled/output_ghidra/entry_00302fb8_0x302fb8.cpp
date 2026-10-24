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

// Function: entry_00302fb8
// Address: 0x302fb8 - 0x303048
void entry_00302fb8_0x302fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302fb8_0x302fb8");
#endif

    switch (ctx->pc) {
        case 0x303010u: goto label_303010;
        default: break;
    }

    ctx->pc = 0x302fb8u;

    // 0x302fb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fbc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302fc0: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x302fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x302fc4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302fcc: 0x0  nop
    ctx->pc = 0x302fccu;
    // NOP
    // 0x302fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302fd4: 0x0  nop
    ctx->pc = 0x302fd4u;
    // NOP
    // 0x302fd8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302FD8u;
    {
        const bool branch_taken_0x302fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302fd8) {
            ctx->pc = 0x303048u;
            return;
        }
    }
    ctx->pc = 0x302FE0u;
    // 0x302fe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fe4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302fe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302fec: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302ff0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302ff4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302ff8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302ffc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x303000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x303004: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x303004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x303008: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x303008u;
    SET_GPR_U32(ctx, 31, 0x303010u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x303008u, 0x303010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303010u;
label_303010:
    // 0x303010: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x303010u;
    {
        const bool branch_taken_0x303010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303010) {
            ctx->pc = 0x303048u;
            return;
        }
    }
    ctx->pc = 0x303018u;
    // 0x303018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30301c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303020: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303024: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x303024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x303028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30302c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30302cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303034: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303038: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30303c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30303cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303040: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303044: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x303048u;
}
