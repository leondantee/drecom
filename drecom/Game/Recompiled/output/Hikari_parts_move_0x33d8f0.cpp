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

// Function: Hikari_parts_move
// Address: 0x33d8f0 - 0x33da64
void Hikari_parts_move_0x33d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hikari_parts_move_0x33d8f0");
#endif

    ctx->pc = 0x33d8f0u;

    // 0x33d8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33d8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d900: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33d900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x33d904: 0x24725450  addiu       $s2, $v1, 0x5450
    ctx->pc = 0x33d904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 21584));
    // 0x33d908: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x33d908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895580u));
    // 0x33d90c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33d910: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x33d910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x33d914: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d918: 0x2c610080  sltiu       $at, $v1, 0x80
    ctx->pc = 0x33d918u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x33d91c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D91Cu;
    {
        const bool branch_taken_0x33d91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d91c) {
            ctx->pc = 0x33D930u;
            goto label_33d930;
        }
    }
    ctx->pc = 0x33D924u;
    // 0x33d924: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d928: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33d92c: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x33d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_33d930:
    // 0x33d930: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33d934: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d93c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33d940: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d944: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d94c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d950: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d954: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d958: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d95c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33d960: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d964: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d96c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d970: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d974: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x33d978: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33d97c: 0x247101b0  addiu       $s1, $v1, 0x1B0
    ctx->pc = 0x33d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x33d980: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d984: 0x2c610080  sltiu       $at, $v1, 0x80
    ctx->pc = 0x33d984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x33d988: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D988u;
    {
        const bool branch_taken_0x33d988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d988) {
            ctx->pc = 0x33D99Cu;
            goto label_33d99c;
        }
    }
    ctx->pc = 0x33D990u;
    // 0x33d990: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d994: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33d998: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x33d998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_33d99c:
    // 0x33d99c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33d99cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33d9a0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d9a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9a8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x33d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x33d9ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9b0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d9b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9b8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d9bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9c0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d9c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9c8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x33d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x33d9cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9d0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d9d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9d8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d9dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9e0: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x33d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x33d9e4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33d9e8: 0x24710240  addiu       $s1, $v1, 0x240
    ctx->pc = 0x33d9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x33d9ec: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d9f0: 0x2c610080  sltiu       $at, $v1, 0x80
    ctx->pc = 0x33d9f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x33d9f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D9F4u;
    {
        const bool branch_taken_0x33d9f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d9f4) {
            ctx->pc = 0x33DA08u;
            goto label_33da08;
        }
    }
    ctx->pc = 0x33D9FCu;
    // 0x33d9fc: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33da00: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33da04: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x33da04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_33da08:
    // 0x33da08: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33da08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33da0c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33da10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da14: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33da18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da1c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33da20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da24: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33da24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33da28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da2c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33da30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da34: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33da38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da3c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33da40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da44: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33da48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33da4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33da50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33da50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33da54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33da54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33da58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33da58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33da5c: 0x3e00008  jr          $ra
    ctx->pc = 0x33DA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DA64u;
}
