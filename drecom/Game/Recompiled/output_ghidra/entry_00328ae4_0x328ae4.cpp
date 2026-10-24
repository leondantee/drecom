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

// Function: entry_00328ae4
// Address: 0x328ae4 - 0x328b40
void entry_00328ae4_0x328ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328ae4_0x328ae4");
#endif

    switch (ctx->pc) {
        case 0x328b14u: goto label_328b14;
        case 0x328b30u: goto label_328b30;
        default: break;
    }

    ctx->pc = 0x328ae4u;

    // 0x328ae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328ae8: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x328ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x328aec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x328aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x328af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328af4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x328AF4u;
    {
        const bool branch_taken_0x328af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328af4) {
            ctx->pc = 0x328B40u;
            return;
        }
    }
    ctx->pc = 0x328AFCu;
    // 0x328afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b04: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x328b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x328b08: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x328b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x328b0c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x328B0Cu;
    SET_GPR_U32(ctx, 31, 0x328B14u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x328B14u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328B14u) { return; }
    ctx->pc = 0x328B14u;
label_328b14:
    // 0x328b14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x328b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b20: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x328b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x328b24: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x328b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x328b28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x328B28u;
    SET_GPR_U32(ctx, 31, 0x328B30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x328B30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328B30u) { return; }
    ctx->pc = 0x328B30u;
label_328b30:
    // 0x328b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x328b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x328b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b3c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x328b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x328b40u;
}
