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

// Function: caseD_3
// Address: 0x318d9c - 0x318e40
void caseD_3_0x318d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x318d9c");
#endif

    ctx->pc = 0x318d9cu;

    // 0x318d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318da0: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318da4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x318da8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318db0: 0x0  nop
    ctx->pc = 0x318db0u;
    // NOP
    // 0x318db4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318db8: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x318dbc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318dc0: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318dc4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x318dc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318dd0: 0x0  nop
    ctx->pc = 0x318dd0u;
    // NOP
    // 0x318dd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318dd8: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318ddc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318de0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318de4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x318de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x318de8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318df0: 0x0  nop
    ctx->pc = 0x318df0u;
    // NOP
    // 0x318df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318df8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318dfc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e00: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x318e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x318e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318e08: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x318e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x318e0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e10: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x318e14: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x318e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x318e18: 0x142000ed  bnez        $at, . + 4 + (0xED << 2)
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318e18) {
            ctx->pc = 0x3191D0u;
            return;
        }
    }
    ctx->pc = 0x318E20u;
    // 0x318e20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e24: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x318e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x318e28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x318e30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318e34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x318e38: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x318E38u;
    {
        const bool branch_taken_0x318e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e38) {
            ctx->pc = 0x3191D0u;
            return;
        }
    }
    ctx->pc = 0x318E40u;
}
