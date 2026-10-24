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

// Function: entry_001fcfc4
// Address: 0x1fcfc4 - 0x1fd034
void entry_001fcfc4_0x1fcfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcfc4_0x1fcfc4");
#endif

    switch (ctx->pc) {
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd024u: goto label_1fd024;
        default: break;
    }

    ctx->pc = 0x1fcfc4u;

    // 0x1fcfc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfc8: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fcfcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcfd0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fcfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fcfd4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FCFD4u;
    {
        const bool branch_taken_0x1fcfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfd4) {
            ctx->pc = 0x1FD034u;
            return;
        }
    }
    ctx->pc = 0x1FCFDCu;
    // 0x1fcfdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfe0: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fcfe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fcfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fcfe8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fcfec: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCFECu;
    {
        const bool branch_taken_0x1fcfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfec) {
            ctx->pc = 0x1FD034u;
            return;
        }
    }
    ctx->pc = 0x1FCFF4u;
    // 0x1fcff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcffc: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fcffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd000: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd004: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD004u;
    SET_GPR_U32(ctx, 31, 0x1FD00Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD00Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD00Cu) { return; }
    ctx->pc = 0x1FD00Cu;
label_1fd00c:
    // 0x1fd00c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd010: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd014: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fd014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fd018: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd01c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD01Cu;
    SET_GPR_U32(ctx, 31, 0x1FD024u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD024u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD024u) { return; }
    ctx->pc = 0x1FD024u;
label_1fd024:
    // 0x1fd024: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd02c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd030: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1fd034u;
}
