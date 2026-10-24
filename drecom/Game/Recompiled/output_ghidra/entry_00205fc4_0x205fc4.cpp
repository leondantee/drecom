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

// Function: entry_00205fc4
// Address: 0x205fc4 - 0x20606c
void entry_00205fc4_0x205fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205fc4_0x205fc4");
#endif

    switch (ctx->pc) {
        case 0x206004u: goto label_206004;
        default: break;
    }

    ctx->pc = 0x205fc4u;

    // 0x205fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x205fc8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x205fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x205fcc: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x205FCCu;
    {
        const bool branch_taken_0x205fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fcc) {
            ctx->pc = 0x20609Cu;
            return;
        }
    }
    ctx->pc = 0x205FD4u;
    // 0x205fd4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x205fd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x205fdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205fe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205fe4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x205fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x205fe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205fec: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x205fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x205ff0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x205ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205ff4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x205ff8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x205ffc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x205FFCu;
    SET_GPR_U32(ctx, 31, 0x206004u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x205FFCu, 0x206004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206004u;
label_206004:
    // 0x206004: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x206004u;
    {
        const bool branch_taken_0x206004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206004) {
            ctx->pc = 0x20606Cu;
            return;
        }
    }
    ctx->pc = 0x20600Cu;
    // 0x20600c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x206010: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x206010u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206014: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x206014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x206018: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20601c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206020: 0x0  nop
    ctx->pc = 0x206020u;
    // NOP
    // 0x206024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206028: 0x0  nop
    ctx->pc = 0x206028u;
    // NOP
    // 0x20602c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20602Cu;
    {
        const bool branch_taken_0x20602c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20602c) {
            ctx->pc = 0x20606Cu;
            return;
        }
    }
    ctx->pc = 0x206034u;
    // 0x206034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206038: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20603c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20603cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206040: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206048: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20604c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206050: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206054: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206058: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20605c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206060: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206064: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206064u;
    {
        const bool branch_taken_0x206064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206064) {
            ctx->pc = 0x20609Cu;
            return;
        }
    }
    ctx->pc = 0x20606Cu;
}
