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

// Function: entry_001fe214
// Address: 0x1fe214 - 0x1fe2c8
void entry_001fe214_0x1fe214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe214_0x1fe214");
#endif

    ctx->pc = 0x1fe214u;

    // 0x1fe214: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe218: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x1fe218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1fe21c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe220: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x1fe220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe224: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe228: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fe228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fe22c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe230: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x1fe230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe234: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe238: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe23c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe240: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe244: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe248: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe24c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe250: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe254: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe258: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe25c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe260: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe264: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe26c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe26cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe270: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe274: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe27c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fe27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe280: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe284: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe288: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe28c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe28cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe290: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe294: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x1fe294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1fe298: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2a0: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe2a4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe2a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe2a8: 0x204082a  slt         $at, $s0, $a0
    ctx->pc = 0x1fe2a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe2ac: 0x1420015a  bnez        $at, . + 4 + (0x15A << 2)
    ctx->pc = 0x1FE2ACu;
    {
        const bool branch_taken_0x1fe2ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2ac) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE2B4u;
    // 0x1fe2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe2b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2bc: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe2c0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1FE2C0u;
    {
        const bool branch_taken_0x1fe2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2c0) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE2C8u;
}
