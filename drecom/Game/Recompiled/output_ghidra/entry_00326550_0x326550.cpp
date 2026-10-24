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

// Function: entry_00326550
// Address: 0x326550 - 0x3265ac
void entry_00326550_0x326550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326550_0x326550");
#endif

    switch (ctx->pc) {
        case 0x326580u: goto label_326580;
        case 0x32659cu: goto label_32659c;
        default: break;
    }

    ctx->pc = 0x326550u;

    // 0x326550: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326554: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x326554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x326558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32655c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x326560: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x326560u;
    {
        const bool branch_taken_0x326560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326560) {
            ctx->pc = 0x3265ACu;
            return;
        }
    }
    ctx->pc = 0x326568u;
    // 0x326568: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32656c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x32656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326570: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x326574: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x326574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x326578: 0xc040ca2  jal         func_103288
    ctx->pc = 0x326578u;
    SET_GPR_U32(ctx, 31, 0x326580u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x326580u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x326580u) { return; }
    ctx->pc = 0x326580u;
label_326580:
    // 0x326580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x326584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326588: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x326588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32658c: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x326590: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x326590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x326594: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x326594u;
    SET_GPR_U32(ctx, 31, 0x32659Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x32659Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32659Cu) { return; }
    ctx->pc = 0x32659Cu;
label_32659c:
    // 0x32659c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3265a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3265a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3265a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3265a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3265a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3265a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x3265acu;
}
