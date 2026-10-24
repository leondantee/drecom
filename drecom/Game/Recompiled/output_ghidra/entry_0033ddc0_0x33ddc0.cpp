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

// Function: entry_0033ddc0
// Address: 0x33ddc0 - 0x33de88
void entry_0033ddc0_0x33ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ddc0_0x33ddc0");
#endif

    ctx->pc = 0x33ddc0u;

label_33ddc0:
    // 0x33ddc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33ddc4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x33ddc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ddcc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33ddd0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33ddd4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x33ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x33ddd8: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x33dddc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33dde0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x33dde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33dde8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33ddec: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33ddf0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x33ddf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33ddf8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x33ddfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33de00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33de04: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x33de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33de08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33de0c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33de10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33de10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33de14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33de14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33de18: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33de18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x33de1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33de20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33de24: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x33de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33de28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33de28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33de2c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33de2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33de30: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x33de30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x33de34: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x33de34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x33de38: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x33de38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x33de3c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x33de3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33de40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33de44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33de48: 0x1c60ffdd  bgtz        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x33DE48u;
    {
        const bool branch_taken_0x33de48 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33de48) {
            ctx->pc = 0x33DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ddc0;
        }
    }
    ctx->pc = 0x33DE50u;
    // 0x33de50: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x33de54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33de58: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x33de58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x33de5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33DE5Cu;
    {
        const bool branch_taken_0x33de5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33de5c) {
            ctx->pc = 0x33DE88u;
            return;
        }
    }
    ctx->pc = 0x33DE64u;
    // 0x33de64: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x33de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x33de68: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x33de6c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x33de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x33de70: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x33de74: 0x24030c00  addiu       $v1, $zero, 0xC00
    ctx->pc = 0x33de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x33de78: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DE78u;
    {
        const bool branch_taken_0x33de78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33de78) {
            ctx->pc = 0x33DE88u;
            return;
        }
    }
    ctx->pc = 0x33DE80u;
    // 0x33de80: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x33de80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x33de84: 0x0  nop
    ctx->pc = 0x33de84u;
    // NOP
    ctx->pc = 0x33de88u;
}
