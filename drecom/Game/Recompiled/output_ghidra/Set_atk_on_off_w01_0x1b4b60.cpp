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

// Function: Set_atk_on_off_w01
// Address: 0x1b4b60 - 0x1b4c2c
void Set_atk_on_off_w01_0x1b4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_atk_on_off_w01_0x1b4b60");
#endif

    switch (ctx->pc) {
        case 0x1b4b8cu: goto label_1b4b8c;
        default: break;
    }

    ctx->pc = 0x1b4b60u;

    // 0x1b4b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4b64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b4b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4b6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1b4b70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b4b74: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b4b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b4b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4b7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4b80: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1b4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4b84: 0xc058c14  jal         func_163050
    ctx->pc = 0x1B4B84u;
    SET_GPR_U32(ctx, 31, 0x1B4B8Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1B4B84u, 0x1B4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B8Cu;
label_1b4b8c:
    // 0x1b4b8c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4B8Cu;
    {
        const bool branch_taken_0x1b4b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b8c) {
            ctx->pc = 0x1B4BC4u;
            goto label_1b4bc4;
        }
    }
    ctx->pc = 0x1B4B94u;
    // 0x1b4b94: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b4b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4b98: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b4b9c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1b4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1b4ba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4ba4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4ba8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b4bac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bb0: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1b4bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4bb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4bbc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4BBCu;
    {
        const bool branch_taken_0x1b4bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bbc) {
            ctx->pc = 0x1B4C18u;
            goto label_1b4c18;
        }
    }
    ctx->pc = 0x1B4BC4u;
label_1b4bc4:
    // 0x1b4bc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bc8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4bcc: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4bd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4bd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4BD4u;
    {
        const bool branch_taken_0x1b4bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bd4) {
            ctx->pc = 0x1B4BF8u;
            goto label_1b4bf8;
        }
    }
    ctx->pc = 0x1B4BDCu;
    // 0x1b4bdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4be0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4be4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4bf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4BF0u;
    {
        const bool branch_taken_0x1b4bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bf0) {
            ctx->pc = 0x1B4C18u;
            goto label_1b4c18;
        }
    }
    ctx->pc = 0x1B4BF8u;
label_1b4bf8:
    // 0x1b4bf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4bfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c00: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4c10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c14: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1b4c14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
label_1b4c18:
    // 0x1b4c18: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b4c18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C2Cu;
}
