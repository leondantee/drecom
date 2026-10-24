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

// Function: entry_001fd0bc
// Address: 0x1fd0bc - 0x1fd11c
void entry_001fd0bc_0x1fd0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd0bc_0x1fd0bc");
#endif

    switch (ctx->pc) {
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd108u: goto label_1fd108;
        default: break;
    }

    ctx->pc = 0x1fd0bcu;

    // 0x1fd0bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0c0: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd0c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd0c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fd0c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fd0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fd0cc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD0CCu;
    {
        const bool branch_taken_0x1fd0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0cc) {
            ctx->pc = 0x1FD11Cu;
            return;
        }
    }
    ctx->pc = 0x1FD0D4u;
    // 0x1fd0d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0dc: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd0e0: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd0e4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD0E4u;
    SET_GPR_U32(ctx, 31, 0x1FD0ECu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD0ECu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD0ECu) { return; }
    ctx->pc = 0x1FD0ECu;
label_1fd0ec:
    // 0x1fd0ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f8: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fd0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd0fc: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x1fd0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fd100: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD100u;
    SET_GPR_U32(ctx, 31, 0x1FD108u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD108u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD108u) { return; }
    ctx->pc = 0x1FD108u;
label_1fd108:
    // 0x1fd108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd110: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd114: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fd118: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fd11cu;
}
