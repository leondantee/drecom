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

// Function: entry_0013bda0
// Address: 0x13bda0 - 0x13be28
void entry_0013bda0_0x13bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bda0_0x13bda0");
#endif

    switch (ctx->pc) {
        case 0x13bdd4u: goto label_13bdd4;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13bdfcu: goto label_13bdfc;
        default: break;
    }

    ctx->pc = 0x13bda0u;

    // 0x13bda0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13bda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bda4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bda8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13bdac: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13BDACu;
    {
        const bool branch_taken_0x13bdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bdac) {
            ctx->pc = 0x13BF28u;
            return;
        }
    }
    ctx->pc = 0x13BDB4u;
    // 0x13bdb4: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13bdb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bdbc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13bdc0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13bdc4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13bdc8: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x13bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x13bdcc: 0xc040c00  jal         func_103000
    ctx->pc = 0x13BDCCu;
    SET_GPR_U32(ctx, 31, 0x13BDD4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13BDD4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13BDD4u) { return; }
    ctx->pc = 0x13BDD4u;
label_13bdd4:
    // 0x13bdd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bdd8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13bddc: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x13bde0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13bde4: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x13bde8: 0xc040c00  jal         func_103000
    ctx->pc = 0x13BDE8u;
    SET_GPR_U32(ctx, 31, 0x13BDF0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13BDF0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13BDF0u) { return; }
    ctx->pc = 0x13BDF0u;
label_13bdf0:
    // 0x13bdf0: 0xc62c00ac  lwc1        $f12, 0xAC($s1)
    ctx->pc = 0x13bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13bdf4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x13BDF4u;
    SET_GPR_U32(ctx, 31, 0x13BDFCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x13BDF4u, 0x13BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDFCu;
label_13bdfc:
    // 0x13bdfc: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x13bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x13be00: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13be04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13be08: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x13be0c: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x13be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13be10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13be10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13be14: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13be14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13be18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BE18u;
    {
        const bool branch_taken_0x13be18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13be18) {
            ctx->pc = 0x13BE28u;
            return;
        }
    }
    ctx->pc = 0x13BE20u;
    // 0x13be20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13be24: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    ctx->pc = 0x13be28u;
}
