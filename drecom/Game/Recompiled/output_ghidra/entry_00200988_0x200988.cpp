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

// Function: entry_00200988
// Address: 0x200988 - 0x200a30
void entry_00200988_0x200988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200988_0x200988");
#endif

    switch (ctx->pc) {
        case 0x2009d0u: goto label_2009d0;
        case 0x200a04u: goto label_200a04;
        default: break;
    }

    ctx->pc = 0x200988u;

    // 0x200988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20098c: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x20098cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x200990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200994: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x200998: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x200998u;
    {
        const bool branch_taken_0x200998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200998) {
            ctx->pc = 0x200A30u;
            return;
        }
    }
    ctx->pc = 0x2009A0u;
    // 0x2009a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009a4: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x2009a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x2009a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2009a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2009ac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2009acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2009b0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2009B0u;
    {
        const bool branch_taken_0x2009b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2009b0) {
            ctx->pc = 0x200B90u;
            return;
        }
    }
    ctx->pc = 0x2009B8u;
    // 0x2009b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009c0: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2009c4: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x2009c8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2009C8u;
    SET_GPR_U32(ctx, 31, 0x2009D0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2009D0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2009D0u) { return; }
    ctx->pc = 0x2009D0u;
label_2009d0:
    // 0x2009d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009d4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x2009d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x2009d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2009d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2009dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2009e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2009e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2009e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009f0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2009f4: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2009f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2009f8: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x2009f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2009fc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2009FCu;
    SET_GPR_U32(ctx, 31, 0x200A04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x200A04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200A04u) { return; }
    ctx->pc = 0x200A04u;
label_200a04:
    // 0x200a04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x200a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a10: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x200a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x200a14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200a18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x200a1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200a24: 0xe460048c  swc1        $f0, 0x48C($v1)
    ctx->pc = 0x200a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1164), bits); }
    // 0x200a28: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x200A28u;
    {
        const bool branch_taken_0x200a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a28) {
            ctx->pc = 0x200B90u;
            return;
        }
    }
    ctx->pc = 0x200A30u;
}
