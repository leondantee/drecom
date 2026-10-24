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

// Function: entry_0022a4b8
// Address: 0x22a4b8 - 0x22a538
void entry_0022a4b8_0x22a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a4b8_0x22a4b8");
#endif

    switch (ctx->pc) {
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a530u: goto label_22a530;
        default: break;
    }

    ctx->pc = 0x22a4b8u;

    // 0x22a4b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22a4c0: 0x1060014e  beqz        $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x22A4C0u;
    {
        const bool branch_taken_0x22a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a4c0) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A4C8u;
    // 0x22a4c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22a4d4: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x22a4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x22a4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a4e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A4E0u;
    SET_GPR_U32(ctx, 31, 0x22A4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A4E0u, 0x22A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4E8u;
label_22a4e8:
    // 0x22a4e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4ec: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x22a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a4f0: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x22a4f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x22a4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a4fc: 0x0  nop
    ctx->pc = 0x22a4fcu;
    // NOP
    // 0x22a500: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a504: 0x0  nop
    ctx->pc = 0x22a504u;
    // NOP
    // 0x22a508: 0x4500013c  bc1f        . + 4 + (0x13C << 2)
    ctx->pc = 0x22A508u;
    {
        const bool branch_taken_0x22a508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a508) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A510u;
    // 0x22a510: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a514: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22a51c: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
    // 0x22a520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a528: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A528u;
    SET_GPR_U32(ctx, 31, 0x22A530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A528u, 0x22A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A530u;
label_22a530:
    // 0x22a530: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A538u;
}
