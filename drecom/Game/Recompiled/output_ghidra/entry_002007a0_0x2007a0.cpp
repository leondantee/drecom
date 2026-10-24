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

// Function: entry_002007a0
// Address: 0x2007a0 - 0x200838
void entry_002007a0_0x2007a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002007a0_0x2007a0");
#endif

    switch (ctx->pc) {
        case 0x200800u: goto label_200800;
        case 0x200820u: goto label_200820;
        default: break;
    }

    ctx->pc = 0x2007a0u;

    // 0x2007a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007a4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2007a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2007a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2007a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2007ac: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2007acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2007b0: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x2007B0u;
    {
        const bool branch_taken_0x2007b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2007b0) {
            ctx->pc = 0x2005B4u;
            return;
        }
    }
    ctx->pc = 0x2007B8u;
    // 0x2007b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007bc: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x2007bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x2007c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2007c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2007c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2007c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2007C8u;
    {
        const bool branch_taken_0x2007c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007c8) {
            ctx->pc = 0x200838u;
            return;
        }
    }
    ctx->pc = 0x2007D0u;
    // 0x2007d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007d4: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x2007d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x2007d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2007dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2007dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2007e0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2007E0u;
    {
        const bool branch_taken_0x2007e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007e0) {
            ctx->pc = 0x200988u;
            return;
        }
    }
    ctx->pc = 0x2007E8u;
    // 0x2007e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007f0: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x2007f4: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x2007f8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2007F8u;
    SET_GPR_U32(ctx, 31, 0x200800u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x200800u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200800u) { return; }
    ctx->pc = 0x200800u;
label_200800:
    // 0x200800: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20080c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x200810: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x200814: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x200818: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x200818u;
    SET_GPR_U32(ctx, 31, 0x200820u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x200820u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200820u) { return; }
    ctx->pc = 0x200820u;
label_200820:
    // 0x200820: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x200824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200828: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20082c: 0xe460048c  swc1        $f0, 0x48C($v1)
    ctx->pc = 0x20082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1164), bits); }
    // 0x200830: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200830) {
            ctx->pc = 0x200988u;
            return;
        }
    }
    ctx->pc = 0x200838u;
}
