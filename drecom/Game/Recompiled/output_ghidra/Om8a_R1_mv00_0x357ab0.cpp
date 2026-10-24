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

// Function: Om8a_R1_mv00
// Address: 0x357ab0 - 0x357e20
void Om8a_R1_mv00_0x357ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8a_R1_mv00_0x357ab0");
#endif

    ctx->pc = 0x357ab0u;

    // 0x357ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357ab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357abc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x357abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x357ac0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x357ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x357ac4: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x357ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x357ac8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357acc: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x357accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x357ad0: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x357AD0u;
    {
        const bool branch_taken_0x357ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ad0) {
            ctx->pc = 0x357E0Cu;
            goto label_357e0c;
        }
    }
    ctx->pc = 0x357AD8u;
    // 0x357ad8: 0x8e241a1c  lw          $a0, 0x1A1C($s1)
    ctx->pc = 0x357ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6684)));
    // 0x357adc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x357adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x357ae0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x357ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x357ae4: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x357AE4u;
    {
        const bool branch_taken_0x357ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ae4) {
            ctx->pc = 0x357C80u;
            goto label_357c80;
        }
    }
    ctx->pc = 0x357AECu;
    // 0x357aec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357af0: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x357af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x357af4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x357af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x357af8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x357af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357afc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b00: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b04: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x357b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x357b08: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x357b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x357b0c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b10: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b14: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x357b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x357b18: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x357b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x357b1c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b20: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b24: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x357b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x357b28: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x357b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x357b2c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b30: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b34: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x357b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x357b38: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x357b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x357b3c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b40: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b44: 0xae03021c  sw          $v1, 0x21C($s0)
    ctx->pc = 0x357b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 3));
    // 0x357b48: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x357b4c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b50: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b54: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x357b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
    // 0x357b58: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x357b5c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b60: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b64: 0xae0302bc  sw          $v1, 0x2BC($s0)
    ctx->pc = 0x357b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
    // 0x357b68: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x357b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x357b6c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b70: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b74: 0xae03030c  sw          $v1, 0x30C($s0)
    ctx->pc = 0x357b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 3));
    // 0x357b78: 0x8e0303ac  lw          $v1, 0x3AC($s0)
    ctx->pc = 0x357b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x357b7c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b80: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b84: 0xae0303ac  sw          $v1, 0x3AC($s0)
    ctx->pc = 0x357b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 3));
    // 0x357b88: 0x8e0303fc  lw          $v1, 0x3FC($s0)
    ctx->pc = 0x357b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
    // 0x357b8c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357b90: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357b94: 0xae0303fc  sw          $v1, 0x3FC($s0)
    ctx->pc = 0x357b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 3));
    // 0x357b98: 0x8e03044c  lw          $v1, 0x44C($s0)
    ctx->pc = 0x357b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x357b9c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357ba0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357ba4: 0xae03044c  sw          $v1, 0x44C($s0)
    ctx->pc = 0x357ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 3));
    // 0x357ba8: 0x8e03049c  lw          $v1, 0x49C($s0)
    ctx->pc = 0x357ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x357bac: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357bb0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357bb4: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x357bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x357bb8: 0x8e0304ec  lw          $v1, 0x4EC($s0)
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x357bbc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357bc0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357bc4: 0xae0304ec  sw          $v1, 0x4EC($s0)
    ctx->pc = 0x357bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 3));
    // 0x357bc8: 0x8e03053c  lw          $v1, 0x53C($s0)
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x357bcc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357bd0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357bd4: 0xae03053c  sw          $v1, 0x53C($s0)
    ctx->pc = 0x357bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1340), GPR_U32(ctx, 3));
    // 0x357bd8: 0x8e03058c  lw          $v1, 0x58C($s0)
    ctx->pc = 0x357bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
    // 0x357bdc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357be0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357be4: 0xae03058c  sw          $v1, 0x58C($s0)
    ctx->pc = 0x357be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 3));
    // 0x357be8: 0x8e0305dc  lw          $v1, 0x5DC($s0)
    ctx->pc = 0x357be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
    // 0x357bec: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357bf0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357bf4: 0xae0305dc  sw          $v1, 0x5DC($s0)
    ctx->pc = 0x357bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1500), GPR_U32(ctx, 3));
    // 0x357bf8: 0x8e04062c  lw          $a0, 0x62C($s0)
    ctx->pc = 0x357bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x357bfc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c04: 0xae03062c  sw          $v1, 0x62C($s0)
    ctx->pc = 0x357c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1580), GPR_U32(ctx, 3));
    // 0x357c08: 0x8e04067c  lw          $a0, 0x67C($s0)
    ctx->pc = 0x357c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1660)));
    // 0x357c0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c10: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c14: 0xae03067c  sw          $v1, 0x67C($s0)
    ctx->pc = 0x357c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 3));
    // 0x357c18: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x357c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x357c1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c20: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c24: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x357c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x357c28: 0x8e04071c  lw          $a0, 0x71C($s0)
    ctx->pc = 0x357c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
    // 0x357c2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c30: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c34: 0xae03071c  sw          $v1, 0x71C($s0)
    ctx->pc = 0x357c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1820), GPR_U32(ctx, 3));
    // 0x357c38: 0x8e04076c  lw          $a0, 0x76C($s0)
    ctx->pc = 0x357c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x357c3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c40: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c44: 0xae03076c  sw          $v1, 0x76C($s0)
    ctx->pc = 0x357c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1900), GPR_U32(ctx, 3));
    // 0x357c48: 0x8e0407bc  lw          $a0, 0x7BC($s0)
    ctx->pc = 0x357c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1980)));
    // 0x357c4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c50: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c54: 0xae0307bc  sw          $v1, 0x7BC($s0)
    ctx->pc = 0x357c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 3));
    // 0x357c58: 0x8e04080c  lw          $a0, 0x80C($s0)
    ctx->pc = 0x357c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x357c5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c64: 0xae03080c  sw          $v1, 0x80C($s0)
    ctx->pc = 0x357c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 3));
    // 0x357c68: 0x8e04085c  lw          $a0, 0x85C($s0)
    ctx->pc = 0x357c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x357c6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c74: 0xae03085c  sw          $v1, 0x85C($s0)
    ctx->pc = 0x357c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 3));
    // 0x357c78: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x357C78u;
    {
        const bool branch_taken_0x357c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c78) {
            ctx->pc = 0x357E0Cu;
            goto label_357e0c;
        }
    }
    ctx->pc = 0x357C80u;
label_357c80:
    // 0x357c80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357c84: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x357c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x357c88: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x357c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x357c8c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x357c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357c90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357c94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357c98: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x357c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x357c9c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x357c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x357ca0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357ca4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357ca8: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x357ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x357cac: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x357cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x357cb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357cb4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357cb8: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x357cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x357cbc: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x357cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x357cc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357cc4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357cc8: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x357cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x357ccc: 0x8e04021c  lw          $a0, 0x21C($s0)
    ctx->pc = 0x357cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x357cd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357cd4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357cd8: 0xae03021c  sw          $v1, 0x21C($s0)
    ctx->pc = 0x357cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 3));
    // 0x357cdc: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x357cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x357ce0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357ce4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357ce8: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x357ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
    // 0x357cec: 0x8e0402bc  lw          $a0, 0x2BC($s0)
    ctx->pc = 0x357cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x357cf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357cf4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357cf8: 0xae0302bc  sw          $v1, 0x2BC($s0)
    ctx->pc = 0x357cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
    // 0x357cfc: 0x8e04030c  lw          $a0, 0x30C($s0)
    ctx->pc = 0x357cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x357d00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d04: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d08: 0xae03030c  sw          $v1, 0x30C($s0)
    ctx->pc = 0x357d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 3));
    // 0x357d0c: 0x8e0403ac  lw          $a0, 0x3AC($s0)
    ctx->pc = 0x357d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x357d10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d18: 0xae0303ac  sw          $v1, 0x3AC($s0)
    ctx->pc = 0x357d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 3));
    // 0x357d1c: 0x8e0403fc  lw          $a0, 0x3FC($s0)
    ctx->pc = 0x357d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
    // 0x357d20: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d28: 0xae0303fc  sw          $v1, 0x3FC($s0)
    ctx->pc = 0x357d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 3));
    // 0x357d2c: 0x8e04044c  lw          $a0, 0x44C($s0)
    ctx->pc = 0x357d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x357d30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d34: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d38: 0xae03044c  sw          $v1, 0x44C($s0)
    ctx->pc = 0x357d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 3));
    // 0x357d3c: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x357d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x357d40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d44: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d48: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x357d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x357d4c: 0x8e0404ec  lw          $a0, 0x4EC($s0)
    ctx->pc = 0x357d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x357d50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d58: 0xae0304ec  sw          $v1, 0x4EC($s0)
    ctx->pc = 0x357d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 3));
    // 0x357d5c: 0x8e04053c  lw          $a0, 0x53C($s0)
    ctx->pc = 0x357d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x357d60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d68: 0xae03053c  sw          $v1, 0x53C($s0)
    ctx->pc = 0x357d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1340), GPR_U32(ctx, 3));
    // 0x357d6c: 0x8e04058c  lw          $a0, 0x58C($s0)
    ctx->pc = 0x357d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
    // 0x357d70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d78: 0xae03058c  sw          $v1, 0x58C($s0)
    ctx->pc = 0x357d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 3));
    // 0x357d7c: 0x8e0405dc  lw          $a0, 0x5DC($s0)
    ctx->pc = 0x357d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
    // 0x357d80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357d84: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357d88: 0xae0305dc  sw          $v1, 0x5DC($s0)
    ctx->pc = 0x357d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1500), GPR_U32(ctx, 3));
    // 0x357d8c: 0x8e03062c  lw          $v1, 0x62C($s0)
    ctx->pc = 0x357d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x357d90: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357d94: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357d98: 0xae03062c  sw          $v1, 0x62C($s0)
    ctx->pc = 0x357d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1580), GPR_U32(ctx, 3));
    // 0x357d9c: 0x8e03067c  lw          $v1, 0x67C($s0)
    ctx->pc = 0x357d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1660)));
    // 0x357da0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357da4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357da8: 0xae03067c  sw          $v1, 0x67C($s0)
    ctx->pc = 0x357da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 3));
    // 0x357dac: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x357dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x357db0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357db4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357db8: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x357db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x357dbc: 0x8e03071c  lw          $v1, 0x71C($s0)
    ctx->pc = 0x357dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
    // 0x357dc0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357dc4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357dc8: 0xae03071c  sw          $v1, 0x71C($s0)
    ctx->pc = 0x357dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1820), GPR_U32(ctx, 3));
    // 0x357dcc: 0x8e03076c  lw          $v1, 0x76C($s0)
    ctx->pc = 0x357dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x357dd0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357dd4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357dd8: 0xae03076c  sw          $v1, 0x76C($s0)
    ctx->pc = 0x357dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1900), GPR_U32(ctx, 3));
    // 0x357ddc: 0x8e0307bc  lw          $v1, 0x7BC($s0)
    ctx->pc = 0x357ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1980)));
    // 0x357de0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357de4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357de8: 0xae0307bc  sw          $v1, 0x7BC($s0)
    ctx->pc = 0x357de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 3));
    // 0x357dec: 0x8e03080c  lw          $v1, 0x80C($s0)
    ctx->pc = 0x357decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x357df0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357df4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357df8: 0xae03080c  sw          $v1, 0x80C($s0)
    ctx->pc = 0x357df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 3));
    // 0x357dfc: 0x8e03085c  lw          $v1, 0x85C($s0)
    ctx->pc = 0x357dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x357e00: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x357e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x357e04: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x357e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x357e08: 0xae03085c  sw          $v1, 0x85C($s0)
    ctx->pc = 0x357e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 3));
label_357e0c:
    // 0x357e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357e14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357e18: 0x3e00008  jr          $ra
    ctx->pc = 0x357E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357E20u;
}
