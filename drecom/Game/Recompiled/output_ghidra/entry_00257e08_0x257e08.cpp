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

// Function: entry_00257e08
// Address: 0x257e08 - 0x257ebc
void entry_00257e08_0x257e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257e08_0x257e08");
#endif

    switch (ctx->pc) {
        case 0x257e1cu: goto label_257e1c;
        case 0x257e38u: goto label_257e38;
        case 0x257e54u: goto label_257e54;
        case 0x257e6cu: goto label_257e6c;
        case 0x257e84u: goto label_257e84;
        case 0x257ea0u: goto label_257ea0;
        default: break;
    }

    ctx->pc = 0x257e08u;

    // 0x257e08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x257e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x257e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257e14: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E14u;
    SET_GPR_U32(ctx, 31, 0x257E1Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E1Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E1Cu) { return; }
    ctx->pc = 0x257E1Cu;
label_257e1c:
    // 0x257e1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e20: 0x2444e250  addiu       $a0, $v0, -0x1DB0
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x257e24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e28: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257e2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e30: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E30u;
    SET_GPR_U32(ctx, 31, 0x257E38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E38u) { return; }
    ctx->pc = 0x257E38u;
label_257e38:
    // 0x257e38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e3c: 0x2444e210  addiu       $a0, $v0, -0x1DF0
    ctx->pc = 0x257e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x257e40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e44: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x257e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257e48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e4c: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E4Cu;
    SET_GPR_U32(ctx, 31, 0x257E54u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E54u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E54u) { return; }
    ctx->pc = 0x257E54u;
label_257e54:
    // 0x257e54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e58: 0x2444ddd0  addiu       $a0, $v0, -0x2230
    ctx->pc = 0x257e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x257e5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e60: 0x2445e250  addiu       $a1, $v0, -0x1DB0
    ctx->pc = 0x257e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x257e64: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257E64u;
    SET_GPR_U32(ctx, 31, 0x257E6Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257E6Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E6Cu) { return; }
    ctx->pc = 0x257E6Cu;
label_257e6c:
    // 0x257e6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e70: 0x2444dd90  addiu       $a0, $v0, -0x2270
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x257e74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e78: 0x2445e210  addiu       $a1, $v0, -0x1DF0
    ctx->pc = 0x257e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x257e7c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257E7Cu;
    SET_GPR_U32(ctx, 31, 0x257E84u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257E84u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E84u) { return; }
    ctx->pc = 0x257E84u;
label_257e84:
    // 0x257e84: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257e88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e8c: 0x2444df50  addiu       $a0, $v0, -0x20B0
    ctx->pc = 0x257e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x257e90: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x257e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x257e94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e98: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E98u;
    SET_GPR_U32(ctx, 31, 0x257EA0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257EA0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EA0u) { return; }
    ctx->pc = 0x257EA0u;
label_257ea0:
    // 0x257ea0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ea4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ea8: 0x2444df10  addiu       $a0, $v0, -0x20F0
    ctx->pc = 0x257ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
    // 0x257eac: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x257eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x257eb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257eb4: 0xc040c00  jal         func_103000
    ctx->pc = 0x257EB4u;
    SET_GPR_U32(ctx, 31, 0x257EBCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257EBCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EBCu) { return; }
    ctx->pc = 0x257EBCu;
}
