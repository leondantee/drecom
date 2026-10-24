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

// Function: entry_00156f70
// Address: 0x156f70 - 0x157028
void entry_00156f70_0x156f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f70_0x156f70");
#endif

    ctx->pc = 0x156f70u;

    // 0x156f70: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x156f74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x156f78: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x156f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x156f7c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156f80: 0x34421050  ori         $v0, $v0, 0x1050
    ctx->pc = 0x156f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4176);
    // 0x156f84: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156f88: 0x96c20018  lhu         $v0, 0x18($s6)
    ctx->pc = 0x156f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x156f8c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x156f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x156f90: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x156f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x156f94: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156f98: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x156f9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x156f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156fa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156fa4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x156fa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x156fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156fac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156fb0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x156fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x156fb4: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x156fb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156fbc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x156fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x156fc0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156fc4: 0x34421051  ori         $v0, $v0, 0x1051
    ctx->pc = 0x156fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4177);
    // 0x156fc8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156fcc: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x156fccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x156fd0: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x156fd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156fd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x156fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x156fdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156fe0: 0x34421052  ori         $v0, $v0, 0x1052
    ctx->pc = 0x156fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4178);
    // 0x156fe4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156fe8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x156fec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x156fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156ff0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x156ff4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156ff8: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x156ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x156ffc: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x157000: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157004: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x157004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x157008: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15700c: 0x34421053  ori         $v0, $v0, 0x1053
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4179);
    // 0x157010: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x157010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x157014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157018: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x157018u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x15701c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15701cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x157020: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157020u;
    {
        const bool branch_taken_0x157020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157020) {
            ctx->pc = 0x157050u;
            return;
        }
    }
    ctx->pc = 0x157028u;
}
